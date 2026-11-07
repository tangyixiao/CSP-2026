#include<bits/stdc++.h>
#define int long long
using namespace std;
bool flag=1;
int n,m,a[500010],cnt[300010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>a[i-1]){
			flag=0;
		}
	}
	if(flag){
		for(int i=1;i<=n;i++){
			int tmp[300010]={};
			for(int j=i;j<=n;j++){
				tmp[a[j]]++;
				tmp[a[j]]%=2;
			}
			for(int j=1;j<=m;j++){
				if(tmp[j])cnt[j]++;
			}
		}
	}
	else{
		for(int j=1;j<=n;j++){
			bool tmp[300010]={};
			vector<int> v;
			for(int i=j;i<=n;i++){
				if(tmp[a[i]]==0)tmp[a[i]]=1,v.push_back(a[i]);
				else{
					bool flag=1;
					for(auto x:v){
						if(x==a[i]){
							flag=0;
						}
						else if(flag==0){
							if(x!=a[i]){
								tmp[x]=0;
							}
						}
					}
				}
			}
			for(int i=1;i<=m;i++){
				if(tmp[i]==1)cnt[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}

