#include <bits/stdc++.h>
using namespace std;
const unsigned long long N=2e5+10;
unsigned long long n,m;
unsigned long long print[50];
unsigned long long a[N][50];
unsigned long long b[N][50];
unsigned long long num[50];
unsigned long long xz[N],top;//xz[i]为选择第i个数 
unsigned long long xz2[N],to2;
unsigned long long k[50],jia[N],jia2[N];
signed main(){
//    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.int","r",stdin);
	freopen("and.out","w",stdout);
	unsigned long long n,m;
	cin>>n>>m;
	unsigned long long mxk=0;
	for(unsigned long long i=1;i<=n;i++){
		cin>>print[i];
	}
//	sort(print+1,print+1+n);
	for(unsigned long long i=1;i<=n;i++){
		unsigned long long x=print[i];
		while(x!=0){
			a[i][++k[i]]=x%2;
			x/=2;
		}
		mxk=max(k[i],mxk);
	}
	for(unsigned long long i=1;i<=n;i++){
		for(unsigned long long j=1,w=mxk;j<=k[i];j++,w--){
			b[i][w]=a[i][j];
			if(b[i][w]==1){
				jia[w]++;
			}
		}
	}
//	for(unsigned long long i=1;i<=n;i++){
//		for(unsigned long long j=1;j<=mxk;j++){
//			cout<<b[i][j];
//		}
//		cout<<"\n";
//	}
	for(unsigned long long j=mxk,q=1;j>=1;j--){
		num[j]=q;
		q=q*2;
	}
	unsigned long long mx=0;
	for(unsigned long long i=1;i<=mxk;i++){
		for(unsigned long long j=n;j>=1;j--){
			a[j][i]=a[j][i+1]*2+b[i][j];
		}
	}
	for(int i=1;i<=n;i++) xz[++top]=i;
	while(top>m){
		bool cmp=1;
		top=0;
		for(int i=1;i<=mxk;i++){
			if(jia[i]>=m){
				cmp=0;
				for(unsigned long long q=1;q<=n;q++){
					if(b[q][i]==1){
						xz[++top]=q;
						mx=i;
					}
				}
			}
		}
//		cout<<"top="<<top<<"-";
		if(cmp) continue;
		for(unsigned long long i=1;i<=mxk;i++) jia[i]=0;
		for(unsigned long long i=mxk;i>=mx;i--){
			for(unsigned long long j=1;j<=top;j++){
				jia2[i]+=b[xz[j]][i];
			}
		}
		to2=0;
		for(unsigned long long i=mx;i<=mxk;i++){
			if(jia2[i]>=m){
				for(unsigned long long j=1;j<=top;j++){
					if(b[xz[j]][i]==1){
						xz2[++to2]=xz[j];
					}
				}
			}
		}
		top=to2;
		for(unsigned long long i=1;i<=to2;i++){
			xz[i]=xz2[i];
		}
	}
//	cout<<top<<"=\n";
	unsigned long long cnt=0;
	for(unsigned long long i=mxk;i>=1;i--){
		int p=1;
		for(unsigned long long j=1;j<=top && j<=m;j++){
			p=p&b[xz[j]][i];
			if(i==mxk){
//				cout<<xz[j]<<"/";
			}
		}
		cnt=cnt*2+p;
	}
//	cout<<"-\n";
	cout<<cnt;
    return 0;
}
/*
3______0011
15_____1111
12_____1100
12_____1100
*/
/*
31_____11111
3______00011
1______00001
15_____01111
7______00111
*/
/*
1_____0001
3_____0011
5_____0101
7_____0111
9_____1001
*/
