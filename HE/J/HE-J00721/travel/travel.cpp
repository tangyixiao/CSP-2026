#include<bits/std c++.h>//为啥我的运行提示一直都是源代码未编写完？ 
using namespace std;   //我的源代码有什么问题吗？ 
int c1,c2,s1,s2;
string c1,s1;
int main()
{
	//这个位置应该有一个带入文件夹的fropen
	fropen("travel.in","r",stdin);
	fropen("travel.out","w",stdout); 
	cin c1>>s1>>c2>>s2;
	if (c1==s1)
		cout <<"1";
	else
		cout <<"0";
		//特殊性质A 
	if (c2[0]==s2[0]&&c2[1]==s2[1])//似乎是在这里筛选字符串的前两位 
		cout<<"1";
	else
		cout <<"0";
		//特殊性质B 
		//下面应该需要做一个二次筛选,特殊性质C怎么筛选？
	 
	reture 0;
}


