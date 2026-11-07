#include<bits/stdc++.h>
using namespace std;
bool hav[50050];
int a[50050],ans[50050],zb[50050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		vector<int> ana;
		memset(zb,0,sizeof(zb));
		memset(hav,0,sizeof(hav));
		for(int j=i;j<=n;j++){
			if(!hav[a[j]]){
				ana.push_back(a[j]);
				zb[a[j]]=ana.size()-1;
				hav[a[j]]=1;
			}
			else{
				for(int k=ana.size()-1;k>zb[a[j]];k--){
					hav[ana[k]]=0;
					zb[ana[k]]=0;
					ana.pop_back();
				}
			}
		}
		for(int k=0;k<ana.size();k++){
			ans[ana[k]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m){
			cout<<' ';
		}
	}
	return 0;
}
