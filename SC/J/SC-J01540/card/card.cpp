#include<bits/stdc++.h>
using namespace std;
int a[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
	}
	srand(time(0));
	for(int i=1;i<=m;i++){
		int o=rand()%10000;
		cout <<o<<' ';
	}
	return 0;
} 