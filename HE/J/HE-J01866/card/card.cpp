#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	vector<long long> a(n);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==0) cout<<0;
	return 0;
}
