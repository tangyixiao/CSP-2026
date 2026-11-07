#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[500005],k;
ll ans[500005];
ll nn[500005],num[500005];
bool f[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(num,0,sizeof(num));
		for(int j=i,d=0;j<=n;j++,d++){
			num[d]=a[d];
			if(f[num[a[d]]]==false){
				for(int k=i;k<=j;k++){
					if(num[k]==num[d]){
						for(int kk=k;kk<=d-1;kk++){
							num[kk]=0;
							f[num[k]]=true;
						}
					}
				}
			}
			f[num[d]]=false;
		}
		for(int j=1;j<=m;j++){
			if(f[j]==false){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
 
