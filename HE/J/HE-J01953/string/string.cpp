#include<bits/stdc++.h>
using namespace std;
struct Point
{
	long long a;
	char b;
};
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n; 
	//用于记录输入的数 
	vector<Point> x(n);
	//用于帮助建立数组 
	long long num = 0;
	for (int i = 0; i < n; i++)
	{
		cin>>x[i].a>>x[i].b;
		//记录要建立的数组一共有多大 
		num+=x[i].a;
	}
	//如果只有一个就不用继续算了 
	if(num == 1)
	{
		cout<<0<<'\n';
		return 0;
	}
	//定义一个数组用于组成字符串 
	vector<char> s(num);
	//组合 
	//用于把记录的组成一个数组 
	long long cnt = 0;
	//为了防止不输出 
	long long jl = cnt;
	for(int i = 0; i < n; i++)
	{
		for(;cnt < jl+x[i].a; cnt++)
		{
			s[cnt] = x[i].b; 
		}
		jl = cnt;
	}
	//判断有几个要改的 
	long long i = 0, j = 0;
	if(num%2 == 0)
	{
		i = num/2-1;
		j = i+1;
	}
	else
	{
		i = num/2-1;
		j = i+2;
	}
	int u = 0;
	for (;i >= 0; j++,i--)
	{
		if(s[i] != s[j])
		{
			u++;
		}
	}
	
	cout<<u<<'\n';
	return 0;
}




