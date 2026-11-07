#include <bits/stdc++.h>

using namespace std; 

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
//	cin.tie(0);
//	cout.tie(0);
	int t;
	scanf("%d", &t);
	
	string str = "";
	int len = 0;
	while(t --)
	{
		int x;
		char c;
		
		scanf("%d %c", &x, &c);
		
		for(int i = 1; i <= x; i ++) str += c;
		len += x;
	}
	
	int minn = 0;
	for(int i = 0; i < len / 2; i ++)
	{
		if(str[i] != str[len - i - 1])
		{
			minn ++;
		}
	}
	
	printf("%d", minn);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

