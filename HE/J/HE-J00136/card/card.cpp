#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
int c[N],c1[N];
int b[N];
vector<int> v;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=b[a[i]];
		b[a[i]]=i;
	}
//	for(int i=1;i<=n;i++){
//		cout<<c[i]<<" ";
//	}cout<<endl;
	for(int i=1;i<=m;i++){
		b[i]=0;
	}
	for(int i=1;i<=n;i++){
		int l=N,r=0;
		memset(c1,0,sizeof(0));
		for(int j=i;j<=n;j++){
			if(c[j]!=0&&((c[j]>=r||c[j]<l)||(l==N&&r==0))&&c[j]>=i){
				//cout<<"222"<<endl;
				if(c[j]>r){
					l=N;
					r=0;
				} 
				l=min(c[j],l);
				r=max(r,j);	
				c1[l]=r;	
			}//cout<<c[j]<<" "<<l<<" "<<r<<endl;
		}
		for(int j=i;j<=n;j++){
			if(c1[j]!=0){
				j+=c1[j]-1;
			}b[a[j]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
//100+48+35

