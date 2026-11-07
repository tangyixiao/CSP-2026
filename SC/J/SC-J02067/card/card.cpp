#include <bits/stdc++.h>
using namespace std;
#define int long long
map<int,int>ac;
int ab[500005]={},ad[500005]={},n,m;
stack<int>ag;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)cin>>ab[i];
	for (int j=1;j<=n;j++){
		for (int i=j;i<=n;i++){
			if (ac[ab[i]]!=0){
				while(true){
					if (ag.top()==ab[i])break;
					ac[ag.top()]=0;ag.pop();
				}
				ag.pop();
			}
			ag.push(ab[i]);ac[ab[i]]=1;
		}
		while(!ag.empty()){
			ad[ag.top()]++;ac[ag.top()]=0;
			ag.pop();
		}
	}
	for (int i=1;i<=m;i++){
		cout<<ad[i]<<" ";
	}
	return 0;
}