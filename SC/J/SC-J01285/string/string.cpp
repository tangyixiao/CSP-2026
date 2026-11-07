#include <bits/stdc++.h>
using namespace std;
string S;
int main()
{
	freopen("string.in","r","stdin")
	freopen("string.out","w","stdout");
	int n,a,ans=0;
	cin>>n;
	while(n!=0)
	{	
		string b;
		cin>>a>>b;
		while(a!=0)
		{
			S+=b;
			a--;
		}
		n-- ;
	}
	for(int i=0,j=S.size()-1;i<j;i++,j--)
	{
		if(S[i]!=S[j])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}