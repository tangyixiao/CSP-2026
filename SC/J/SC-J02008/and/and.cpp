#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long c[200005];
long long b[35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long maxx=-1;
	int sm[35];
	b[0]=1;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	for(int i=1;i<=31;i++){
		b[i]=b[i-1]*2;
	}
	int idx=0;
	int cs=n;
	int z=0;
	for(int i=29;i>=0;i--){
		for(int j=1;j<=cs;j++){
			c[j]=a[j];
				if(a[j]>=b[i]){
					z++;
					a[++idx]=a[j]-b[i];
				}
			}
		if(z>=m){
			sm[i]=1;
			cs=idx;
		}else{
			sm[i]=0;
			for(int j=1;j<=cs;j++){
				a[j]=c[j];
			}
		}
		z=0;
		idx=0;
	}
	long long da=0;
	for(int i=0;i<=29;i++){
		da+=b[i]*sm[i];
	}
	cout<<da;
	return 0;
} 