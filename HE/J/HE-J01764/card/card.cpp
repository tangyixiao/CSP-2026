#include<bits/stdc++.h>
using namespace std;
int a[500010], v[3][300010], n, m, x;
int main(){		//correct? 48
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(false);
	cin>>n>>m;
	stack<int> s;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	for(int t = 1;t<=n;t++){
		for(int i = t;i<=n;i++){
			if(v[1][a[i]]==1){
				while(s.top()!=a[i]){
					x=s.top();
					v[1][x]=0;
					s.pop();
				}
				continue;
			}
			v[1][a[i]]=1;
			s.push(a[i]);
		}
		while(!s.empty()){
			x=s.top();
			v[1][x]=0, v[2][x]++;
			s.pop();
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<v[2][i]<<' ';
	}
	return 0;
} 
