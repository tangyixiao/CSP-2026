#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005],pos[1000005];
bool flag[1000005]={false};
long long cnt[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]+=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(flag[a[j]]){
				for(int k=pos[a[j]];k<=j-1;k++){
					flag[a[k]]=false;
					cnt[a[k]]-=1;
				}
				flag[a[j]]=true;
				pos[a[j]]=j;
			}
			else{
				flag[a[j]]==true;
				pos[a[j]]=j;
			}
		}
		for(int j=1;j<=n;j++){
			flag[a[j]]=false;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
