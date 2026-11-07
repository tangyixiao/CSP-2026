#include<bits/stdc++.h>
using namespace std;

int n,m;
int mx=-1e9;
int a[200009];

int main ()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	for (int i=1; i<=n; i++) {
		cin>>a[i]; 
		mx=max(mx,a[i]);
	} 
	
	cout<<mx<<endl;
	
	return 0;
}
