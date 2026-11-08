#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll=long long;
const int N=5e5+5;
int n,m,a[N],ans[N];
bool lst[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool A=1; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) A=0;
	}
	if(A){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]) cout<<i<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(lst,0,sizeof(lst));
		stack<int>st;
		for(int j=i;j<=n;j++){
			if(!lst[a[j]]) lst[a[j]]=1;
			else{
				while(st.top()!=a[j]) lst[st.top()]=0,st.pop();
				st.pop();
			}
			st.push(a[j]);
		}
		while(!st.empty()) ans[st.top()]++,st.pop();
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

10 6
1 2 3 3 4 4 4 5 6 6
*/
