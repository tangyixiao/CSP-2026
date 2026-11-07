#include<bits/stdc++.h>
#define TAT return 0
using namespace std;
int n,tot=0;
bool flag=1;
int a[2000010];
char ch[2000010];
string str;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>ch[i];
		for(int j=1;j<=a[i];j++)
			str+=ch[i];
	}
	int s=str.size();
	char ccf=ch[1];
	for(int i=1;i<=n;i++)
	{
		if(ccf!=ch[i])
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		cout<<0;
		TAT;
	}
	for(int i=0;i<s/2;i++)
	{
		if(str[i]!=str[s-i-1])
			tot++;
	}
	cout<<tot;
	TAT;
} 
//olD-mOwOn;
/*拉伸!!!*/
/*正在寻找敌人，WC完蛋，是沟槽的美芬，起手131伏击这把也许有的办，希望对面手牌烂
什么t26，466还有蓝盔师，硬头皮交换等后期我还有俾斯麦兜底，什么惩戒逃离斩杀线沟槽的激怒
沟槽的美芬，沟槽的冰岛人！*/ 