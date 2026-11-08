#include<bits/stdc++.h>
using namespace std;
int x[100000];
int y[100000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int o;
		cin>>o;
		x[i]=o; 
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			y[x[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<y[i]<<' ';
	}
	return 0;
}
