#include<bits/stdc++.h>
using namespace std;
const int X=2e5+5;
long long n,m,tot,ans;
struct jj{
	int a;
	char c;
};
jj arr[X];
string s,s1;
int main() 
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i].a>>arr[i].c;
		for(int j=1;j<=arr[i].a;j++) s+=arr[i].c;
	} 
	m=s.size();
	for(int i=m/2-1;i>=0;i--) s1+=s[i];
	if(m%2==0)
	{
		for(int i=m/2;i<m;i++)  if(s[i]!=s1[ans++]) tot++;
		cout<<tot;
	 } 
	else 
	{
		for(int i=m/2+1;i<m;i++) if(s[i]!=s1[ans++]) tot++;
		cout<<tot;
	}
    return 0;
}