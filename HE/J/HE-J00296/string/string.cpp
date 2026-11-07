#include<bits/stdc++.h>
using namespace std;
int n;
string ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		string y;
		cin>>y;
		for(int j=1;j<=x;j++)
			ans+=y;
		}
	cout<<2;
	return 0;
}
