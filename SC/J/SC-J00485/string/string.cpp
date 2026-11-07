#include<bits/stdc++.h> 
using namespace std;
//char s[200001];//数据无法承载，用其他方法 
char p[200001];//输入字符 
long long w[200001];//对应数量 
long long a=0;//答案 
long long l=0;//字符串长度 
long long hj=0;//had judge，已判断元素数量 
/*思路整理: 
首先，有了第一个版本ver1.cpp，通过写入字符数组以对比，但可发现
测试点数据极为夸张，因此，改变思路，改为记录字符个数，不写入数组 
因此可得【！】可以使用一个temp_s和temp_e来表示首数组与末数组的剩余元素，并直接比较temp_s与temp_e大小，
并添加于答案 
当元素数量=0时，即可切换到下一个堆元素，并且判断是否完成，代码使用循环嵌套即可 
并用long long l以记录总元素数量，便于统计 
*/
int main(void){
	long long m;
	long long temp_e=0,temp_s=0,ss=1,es=1;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m;
	for(int i=1;i<=m;i++){//输入 
		cin>>w[i]>>p[i];
	}
	es=m;
	temp_e=w[m];
	temp_s=w[1];//初始化元素个数 
	while(ss<=es){//主循环，终止条件 
		//判断字符是否一致【修改：改为后判断，精简代码】 
		//if(cin[ss]==cin[es])//子分支：字符一样，不加答案，小数组切下一组，大数组数量减去小数组 
			if(temp_e>temp_s){
				if(p[ss]!=p[es])
					a+=temp_s;
				ss+=1;
				temp_e-=temp_s;
				temp_s=w[ss];
			}
			else if(temp_e==temp_s){
				if(p[ss]!=p[es])
					a+=temp_e;
				ss++;es--;
				temp_s=w[ss];
				temp_e=w[es];
			}
			else if(temp_e<temp_s){
				if(p[ss]!=p[es])
					a+=temp_e;
				es--;
				temp_s-=temp_e;
				temp_e=w[es];
			}
	}
			cout<<a;
			fclose(stdin);
			fclose(stdout);
			return 0;
			
}		
