#include<bits/stdc++.h>
using namespace std;
int x,y;
int sum=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>x>>y;
	int u[x]={ };
	for(int i=0;i<x;i++){
		cin>>u[i];
	}
	sort(u,u+x);
	cout<<u[x];
	return 0;
} 
