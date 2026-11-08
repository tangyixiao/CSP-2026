#include <bits/stdc++.h>
using namespace std;
long long n,m,sum;
vector<long long> e[35];
//set<long long> se;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==m){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		long long a,cnt = 1;
		cin>>a;
		int t = a;
		while(a){
			if(a&1) e[cnt].push_back(t);
			a>>=1;
			cnt++;
		}
	}
	int i = 35;
	while(i--){
		if(e[i].size()>=m) break;
	}
	sort(e[i].begin(),e[i].end());
	reverse(e[i].begin(),e[i].end());
	for(int j = 1;j<=m;j++){
		if(j==1) sum = e[i][j];
		sum&=e[i][j];
		//cout<<e[i][j]<<' ';
	}
	cout<<sum;
}
