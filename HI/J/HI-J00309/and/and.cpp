#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[100005];
long long c[2005][2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(n>2000){
		long long maxx=-1;
		for(int i=1;i<=1;i++){
			long long num=a[i];
			for(int j=i+1;j<=i+m-1;j++){
				num&=a[j];
			}
			maxx=max(maxx,num);
		}
		cout<<maxx;
	}
	else if(m!=n){
		memset(b,0x3f,sizeof(b));
		for(int i=1;i<m;i++){
			for(int k=m;k<=n;k++){
				long long maxx=-1,d=min(b[k],a[k]),bj=0;
				for(int j=k-1;j>=1;j--){
					if((d&a[j])>maxx&&c[k][j]==0){
						bj=j,maxx=(d&a[j]);
					}
				}
				c[k][bj]=1,b[k]=maxx;
			}
		}
		long long maxx=-1;
		for(int i=m;i<=n;i++){
			maxx=max(maxx,b[i]);
		}
		long long maxx2=-1;
		for(int i=1;i<=1;i++){
			long long num=a[i];
			for(int j=i+1;j<=i+m-1;j++){
				num&=a[j];
			}
			maxx2=max(maxx2,num);
		}
		cout<<max(maxx,maxx2);
	}
	return 0;
}

