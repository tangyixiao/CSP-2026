#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
long long b[N];
long long n,m;
long long x;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>x;
		b[x]++;
	}
	for(int i = 1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
