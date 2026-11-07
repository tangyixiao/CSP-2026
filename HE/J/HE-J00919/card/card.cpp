#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[500005],b[500005];
	for( int i = 0;i <= n;i ++ ){
		cin>>a[i];
		b[i] = a[i];
		if( b[i] == a[i] ){
			cout<<a[i];
			cout<<b[i];
			cout<<a[i-1];
		} 
	}
    
	return 0;
} 
