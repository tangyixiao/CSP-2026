#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],c[500005];
long long ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c[a[j]]==0){
				b[j]=a[j];
				c[a[j]]=j;
			}else{
				int f=c[a[j]]+1;
				for(;f<j;f++){
					c[b[f]]=0;
					b[f]=0;
				}
				b[j]=0;
			}
		}
		for(int j=1;j<=m;j++){
			if(c[j]){
				ans[j]++;
			}
		}
		memset(b+1,0,n+1);
		memset(c+1,0,n+1);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}