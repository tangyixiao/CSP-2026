#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a = 0;
	if(n%2==0) a = (n-2) & (n-1);
	else a = (n-3) & (n-2);
	cout<<a; 
	return 0;
} 
