#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and","r",stdin);
	freopen("and","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for( int i = 1;i<= n;i ++ ){
		cin>>a[i];
	}
	int x;
	for( int i = 1;i <= n;i ++ ){		
		x = max((a[i],a[i + 1]));
	}
	cout<<x;
	return 0;
} 
