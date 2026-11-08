#include <bits/stdc++.h>
using namespace std;

char p[6] = {'A','B','C','D','E','F'};

bool check1(string A,string B)
{
	string a = A.substr(0,2);
	string b = B.substr(0,2);
	
	return (a == b);
}

bool check2(string A,string B)
{
	char a = A[2],b = B[2];
	return ((a < 'D') && (b < 'D'));
}

bool check3(string A,string B)
{
	char a = A[2],b = B[2];
	if(a == b)
		return false;
	if(a < b)
	{
		for(int i = 0;i < 5;i++)
		{
			if((p[i] == a) && p[i+1] == b)
				return true;
		}
	}
	else
	{
		for(int i = 0;i < 5;i++)
		{
			if((p[i] == b) && p[i+1] == a)
				return true;
		}
	}
	return false;
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int ans[4] = {0,0,0,0};
	
	if(c1 == c2)
		ans[0] = 1;
	
	if(check1(s1,s2)&&(c1 == c2))
		ans[1] = 1;
	
	if((c1 == c2) && check1(s1,s2) && check2(s1,s2))
		ans[2] = 1;
		
	if((c1 == c2) && check1(s1,s2) && check2(s1,s2) && check3(s1,s2))
		ans[3] = 1;
		
	for(int i = 0;i < 4;i++)
		cout << ans[i];
	return 0;
}
