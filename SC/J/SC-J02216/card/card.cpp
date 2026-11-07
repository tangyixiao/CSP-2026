#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
#define ll long long
ll n,a[N],m,ok[N];
map<int,int>lst,mp;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)ok[j]=1;
		for(int j=1;j<=m;j++)lst[j]=0;
		for(int j=i;j<=n;j++){
			if(lst[a[j]]==0){
				lst[a[j]]=j; 
			}else{
				for(int k=lst[a[j]];k<j;k++){
					ok[k]=0;
					if(lst[a[k]]==k)lst[a[k]]=0;
				}
				lst[a[j]]=j;
			}
		}
		for(int j=i;j<=n;j++)if(ok[j])mp[a[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<mp[i]<<" ";
	return 0;
}