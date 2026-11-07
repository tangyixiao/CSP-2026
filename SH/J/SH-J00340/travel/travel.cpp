#include <bits/stdc++.h>

using namespace std;

char c1[10], s1[10], c2[10], s2[10];
int ca, cb, sa, sb;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%s%s%s%s", c1 + 1, s1 + 1, c2 + 1, s2 + 1);
	ca += c1[1] - '0';
	ca = ca * 10 + c1[2] - '0';
	cb += c2[1] - '0';
	cb = cb * 10 + c2[2] - '0';
	if (ca == cb)
	{
		printf("1");
	}
	else
	{
		printf("0000");
		return 0;
	}
	sa += s1[1] - '0';
	sa = sa * 10 + s1[2] - '0';
	sb += s2[1] - '0';
	sb = sb * 10 + s2[2] - '0';
	if (sa == sb)
	{
		printf("1");
	}
	else
	{
		printf("000");
		return 0;
	}
	if ((s1[3] <= 'C' && s2[3] <= 'C') || (s1[3] >= 'D' && s2[3] >= 'D'))
	{
		printf("1");
	}
	else
	{
		printf("00");
		return 0;
	}
	if (((s1[3] - s2[3]) == 1) || ((s1[3] - s2[3]) == -1))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
