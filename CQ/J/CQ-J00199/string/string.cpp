#include <bits/stdc++.h>
using namespace std;
long long n, x, size = 0, num = 0;
string s;
char s1;
int main()
{ 
    
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    
    cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> s1;
		size += x;
		for (int j = i; j < i + x; j++)
		{
			s[j] = s1;
			i = j;
	    }
	}
	int i = 1;
	while(i <= size - i + 1)
	{
		if (s[i] != s[size - i + 1])
		    num++;
        i++;		
	}
	cout << num;
} 
