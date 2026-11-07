#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,t;
	int a[10005];
	cin>>n>>m;
	for(int k=0;k<n;k++){
		cin>>a[k];
	}
	for(int i=0;i<n;i++)
	{
		t=a[i]and a[i+1];
	}
	cout<<t;
	return 0;
	}
