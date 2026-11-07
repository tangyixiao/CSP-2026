#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tmp;
ll n, m;
ll ls[10000005];
bool cmp(ll a, ll b){
	return a> b;
	
}
int main(){	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i =1;i<=n;i++){
		cin >> ls[i];
	}
	sort(ls,ls+1+n,cmp);
	tmp = ls[1];
	for (int i=2;i<m;i++){
		tmp &=ls[i];
	}
	
	cout << tmp;
}
