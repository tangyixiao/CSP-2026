#include<bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr int MAXM=300005;
int n,m,a[500005],ans[MAXM];
stack<int>sta;
bool inSta[MAXM];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		memset(inSta,0,sizeof inSta);
		for(int j=i;j<=n;j++){
			int cur=a[j];
			if(inSta[cur]){
				while(sta.top()!=cur){
					int t=sta.top();
					inSta[t]=0;
					sta.pop();
				}
			}else{
				sta.push(cur);
				inSta[cur]=1;
			}
		}while(!sta.empty()){
			ans[sta.top()]++;
			sta.pop();
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}return 0;
}
