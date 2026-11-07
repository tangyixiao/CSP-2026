#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int c1, c2;
int s1n, s2n;
char s1c, s2c;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1n >> s1c >> c2 >> s2n >> s2c;
//	printf("%d, %d%c, %d %d%c", c1, s1n, s1c, c2, s2n, s2c);

	if (c1 != c2)
	{
		printf("0000");
		return 0;
	}
	if (s1n != s2n)
	{
		printf("1000");
		return 0; 
	}
	if  ((('A'<=s1c&&s1c<='C') ^ ('A'<=s2c&&s2c<='C')))
	{
		printf("1100");
		return 0;
	}
	if ('A' <= s1c&&s1c <= 'C')
	{
		if (abs(s1c - s2c) > 1)
		{
			printf("1110");
			return 0;
		}
	}
	
	printf("1111");
	fclose(stdin);
	fclose(stdout);
    return 0;
}
