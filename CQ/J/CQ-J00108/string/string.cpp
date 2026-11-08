#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string s;
	cin>>n;
	if (n==1)
	{
		cin>>a>>s;
		cout<<0;
		return 0;
	}
	if (n==2)
	{
		int a1;
		string s1;
		cin>>a>>s>>a1>>s1;
		if (s==s1)
		{
		    cout<<0;
			return 0;	
		} 
		else
		{
			cout<<min(a,a1);
			return 0;
		}
	}
	return 0;
}
