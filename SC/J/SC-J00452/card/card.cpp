#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],cnt[M];
vector<int> ans;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		ans.clear();
		for(int j=i;j<n;j++){
			int v=1;
			while(!ans.empty()&&ans[ans.size()-v]!=a[j]&&j!=i){
				if(v==ans.size()){
					v=0;
					break; 
				}
				v++;
			}
			while(v--&&!ans.empty()) ans.pop_back();
			ans.push_back(a[j]);
			
		}
		for(int v:ans){
			cnt[v]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	
}