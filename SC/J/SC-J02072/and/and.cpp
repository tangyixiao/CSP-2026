#include<bits/stdc++.h>
#define int long long
using namespace std;
ifstream fin("and.in");
ofstream fout("and.out");
int n,m,a[1000001];
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	fin>>n>>m;
	for(int i=1;i<=n;i++)fin>>a[i];
	sort(a+1,a+n+1);
	fout<<a[(n+1)/2];
	return 0;
}