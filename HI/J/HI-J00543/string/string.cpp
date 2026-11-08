#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[100005];
	char c[100005];
	string s,ss;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i]>>c[i];
	for(int i=0;i<n;i++) for(int j=0;j<a[i];j++) s.push_back(c[i]);
	for(int i=n-1;i>=0;i--) for(int j=0;j<a[i];j++) ss.push_back(c[i]);
	if(s==ss) cout<<0;
	return 0;
}
