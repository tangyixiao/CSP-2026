#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int n=0,m=0;
int main()
{
	freopen ("and.in","r",stdin);
	freopen ("and.in","r",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	sort(a,a+n);
	int ans;
	for(int i=1;i<m;i++){
		ans=a[n-i]&a[n-i-1]; 
	}
	cout<<ans;
	return 0;
} 
