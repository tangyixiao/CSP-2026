#include<bits/stdc++.h>
using namespace std;
int n,m;
int ca[500009];
int f[500009];
int cnt[300009];
bool have[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>ca[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(have[ca[j]]){
				have[ca[j]]=false;
				for(int k=j-1;ca[k]!=ca[j];k--) have[ca[k]]=false;
			}
			have[ca[j]]=true;
		}
		for(int j=1;j<=m;j++)
			if(have[j]){
				have[j]=false;
				cnt[j]++;
			}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
