#include<bits/stdc++.h>
using namespace std;
int num[500005],ans[300005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>num[i];
	for(int i=1;i<=n;i++){
		stack<int> Z;
		set<int> S;
		for(int j=i;j<=n;j++){
			if(!S.empty()&&S.count(num[j])){
				while(Z.top()!=num[j]){S.erase(Z.top());Z.pop();}
			}
			else{S.insert(num[j]);Z.push(num[j]);}
		}
		for(auto it:S)ans[it]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/