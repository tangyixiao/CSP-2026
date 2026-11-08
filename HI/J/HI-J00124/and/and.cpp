#include<bits/stdc++.h>
using namespace std;
string s;
char c[10];
int n,a,m[100005],x=1,y,z;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>a;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	sort(m+1,m+n+1);
	for(int i=n;i>=1;i--)
	{
		if(m[i]==m[i-1])
		{
			cout<<m[i];
			return 0;
		}
	}
	cout<<m[n-a];
	return 0;
}
