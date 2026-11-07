#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int a[200005];
char c[200005];
bool flag=1;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]!=1) flag=0; 
	}
	if(flag){
		cout<<n-2;
		return 0;
	}
	if(n==1) cout<<0;
	if(n==2){
		if(c[1]==c[2]) cout<<0;
		else if(a[1]>=a[2]) cout<<a[2];
		else cout<<a[1];
	}
	return 0;
} 
