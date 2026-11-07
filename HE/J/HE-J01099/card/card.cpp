#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],num[500005],ans[500005];
vector<int> mieval;
bool vis[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int j=1;
	for(int i=n;i>=1;i--){
		if(vis[a[i]]==0){
			mieval.push_back(a[i]);
			num[a[i]]=j;
			vis[a[i]]=1;
		}
		else{
			while(1){
				if(mieval.back()==a[i]){
					break;
				}
				ans[mieval.back()]+=j-num[mieval.back()];
//				cout<<mieval.back()<<i<<num[mieval.back()];
				vis[mieval.back()]=0;
				num[mieval.back()]=n+1;
				mieval.pop_back();
			}
		}
		j++;
//		for(int i=0;i<mieval.size();i++){
//			cout<<mieval[i]<<' ';
//		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]+n-num[i]+1<<' ';
	}
	return 0;
}
