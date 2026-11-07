#include <bits/stdc++.h>
using namespace std;
const int N=2000005;
int a[N];
char c[N];
string ans="";
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int x=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<a[i];j++)
		{
			ans+=c[i];
		}
	}
	for(int i=0;i<ans.size()/2;i++)
	{
		if(ans[i]!=ans[ans.size()-i-1])
		{
			x++;
		}
	}
	cout<<x;

	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
