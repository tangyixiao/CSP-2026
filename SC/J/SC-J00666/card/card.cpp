#include <bits/stdc++.h>
using namespace std;
int n,m;
long card1[500010]={0},sum1[500010]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card1[i];
	}
	return 0;
}
