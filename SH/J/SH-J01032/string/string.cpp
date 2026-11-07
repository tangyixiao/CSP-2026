#include <bits/stdc++.h> 
using namespace std;
int main()
{   
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s;
	int cnt = 0;
	long long  a;
	char c;
	for (int i = 1;i<= n;i++)
	{   
	    cin >> a;
	    cin >> c;
	    for (int j = 1;j<= a;j++)
	    {
	    	s+= c;
		}
	}
	int l = s.length();
	for (int i = 0;i< l/2;i++)
	{
		if (s[i] != s[l-1-i])
		{
			cnt++;
		}
	}
	cout << cnt;

}
