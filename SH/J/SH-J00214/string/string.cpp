/*
尝试正解 

#include <iostream>
using namespace std;

int a[200010];
char c[200010];
long long s[200010];

int main()
{
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		s[i] = s[i - 1] + a[i];
	}
	long long l = 1;
	int x = 0, y = n + 1;
	long long ans = 0;
	while(？)
	{
		bool f = (c[x] == c[y]); 
	}
	// 暴力可拿一半以上分。 
	return 0;
}
以下为正解尝试 
1 你现在的指针在哪个区间里 = x 
2 你现在的指针的镜像在哪个区间里 = y
3 这两个区间一样吗？ c[x] == c[y] ?
  如果一样，ans不用加，但是还是要移动。 
  ans加多少？和移动的一样。 
4 移动当前指针（多少？） 
5 移动到镜像进入新区间或者当前指针进入新区间。
  是用while吗？ X
  直接改变？改多少？
  
  */
  
  
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int a[200010];
char c[200010];

int check(string s)
{
	int n = s.size();
	int ans = 0;
	for(int i = 0; i < n / 2; i++)
	{
		if(s[i] != s[n - i - 1])	ans++;
	}
	return ans;
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		while(a[i])
		{
			cout << 1;
			s = s + c[i];
			--a[i];
		}
	}
	cout << check(s) << endl;
	// 暴力56分 
	return 0;
}
