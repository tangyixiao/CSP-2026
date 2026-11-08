#include<bits/stdc++.h>
using namespace std;
int a[30005];
int b[30005];
int c[30005];
long long n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//  freopen("cardtest.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		c[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}

