#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 2e5+10;
ll n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n;
	cin >> m;
	n^=m;
	cout << n;
	return 0;
} 
