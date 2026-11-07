#include<bits/stdc++.h> 
using namespace std;
string s;
char x;
long long n,a,l,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>x;
		l+=a;
		for(int j=0;j<a;j++)s+=x;
	}
	for(long long i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-i-1]) ans++;
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
