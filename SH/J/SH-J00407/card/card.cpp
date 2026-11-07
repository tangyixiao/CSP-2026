#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	stack<int> a;
	queue<int> b;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		b.push(x);
	}
	for(int i=1;i<=m;i++){
		cout<<b.front();
		b.pop();
	}
}
