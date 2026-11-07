#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1,s1,c2,s2;
bool f1,f2,f3,f4;
ll c_1,s_1,c_2,s_2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i = 0; i <= 1;i++)
	{
		c_1 = c_1*10+c1[i]-'0';
		s_1 = s_1*10+s1[i]-'0';
		c_2 = c_2*10+c2[i]-'0';
		s_2 = s_2*10+s2[i]-'0';
	}
	if(c_1 == c_2)	
	{
		f1 = true;
	}
	if(f1 && s_1 == s_2)
	{
		f2 = true;
	}
	if(f2 && ((s1[2] <= 'c'&&s2[2] <= 'c')||(s1[2] > 'c'&&s2[2] > 'c')))
	{
		f3 = true;
	}
	if(f3 && (s1[2]+1 == s2[2]||s2[2]+1 == s1[1]))
	{
		f4 = true;
	}
	
	
	cout<<f1<<f2<<f3<<f4;
	return 0;
} 