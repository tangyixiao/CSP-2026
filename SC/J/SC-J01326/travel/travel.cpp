#include <bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<"1";
	else{
		cout<<"0000";
		return 0;
    }
    
	if(s1[0]==s2[0] && s1[1]==s2[1])
		cout<<1;
	else
	{
		cout<<"000";
		return 0;
	}
		
	int n=s1[2]-'A',m=s2[2]-'A';
	if((n>=3 && m>=3) || (n<3 && m<3))
		cout<<1;
	else
	{
		cout<<"00";
		return 0;
	}
	if(max(m,n)-min(n,m)==1)
	{
		cout<<1;
	}else
		cout<<0;
	return 0;
}