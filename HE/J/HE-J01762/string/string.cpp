#include<bits/stdc++.h>
using namespace std;
int n; 
//定义字符串
string s;
long long top = 1;//下标 
//定义最少修改次数
long long ans;
//输入数
long long a;
char c; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//输入
	scanf("%d",&n);
	//输入n行a、c
	for(int i = 1;i <= n;i ++)
	{
		cin >> a >> c; 
		//从top开始，往后a个字母为c
		for(int j = 1;j <= a;j ++)
		{
			s[top] = c;
			top ++;
		} 
	} 
	top --;
	//获得了字符串s
	//将s变成回文串
	for(int i = 1;i <= top / 2;i ++)
	{
		//判断是否回文
		if(s[i] != s[top + 1 - i])
		{
			//不是，变化其中一位
			s[top + 1 - i] = s[i];
			//记录
			ans ++; 
		}	
	} 
	//输出
	printf("%d",ans); 
	return 0;
	//保存时解注释 
}
