#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+55;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,maxx=INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if((a[i]&a[j])>maxx)
				maxx=(a[i]&a[j]);
	cout<<maxx;
	return 0;
}