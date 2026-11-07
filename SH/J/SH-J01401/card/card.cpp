#include <iostream>
#include <vector>
using namespace std;

int n,m;
int arr[500005];
int weight[300005];
bool used[300005];
vector<int> son[300005];
int ans[300005];

void dfs(int x){
	ans[x]=weight[x];
	for(auto y:son[x]){
		dfs(y);
		ans[x]+=ans[y];
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	for(int i=1;i<=m;i++){
		used[i]=0;
	}
	for(int i=n;i>=1;i--){
		weight[arr[i]]++;
		if(!used[arr[i]]){
			used[arr[i]]=true;
			son[arr[i+1]].push_back(arr[i]);
		}
	}
	dfs(0);
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	
	
	
	
	
	
	
	return 0;
}
