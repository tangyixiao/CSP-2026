#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string a1,a2;
int b1,b2;
bool flag = 1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	int len=s1.size();
	for(int i=0;i<len;i++)
	{
		if(s1[i]>='0'&&s1[i]<='9')
		{
			a1+=s1[i];
		}
		else
		{
			b1+=s1[i];
		}
		if(s2[i]>='0'&&s2[i]<='9')
		{
			a2+=s2[i];
		}
		else
		{
			b2+=s2[i];
		}
	}
	if(c1==c2)
	{
		cout << '1'; 
		if(a1==a2)
	{
		cout << '1';
		if(b1==67&&b2==68||b1==68&&b2==67)
		{
			cout <<'0';
			flag = 0;
		}
		else
		{
			cout << '1';
			
		}
	if(abs(b1-b2)==1&&flag==1)
		{
			cout << '1';
		}
		else
			cout << '0';
	}
	else
		cout << "000";
	}
	else
		cout << "0000";
	
	
	
	return 0;
} 
