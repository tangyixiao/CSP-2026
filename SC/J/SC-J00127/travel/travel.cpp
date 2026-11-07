#include<bits/stdc++.h>
using namespace std;
int judge(string k)
{
	bool f=false;
	int len=k.size();
	int num=0;
	for(int i=0;i<len;i++)
	{
		if('0'<=k[i] && k[i]<='9')
		{
			num=num*10+k[i]-'0';
			if(num==0 && !f) 
			{
				continue;
			}
			else{
				f=true;
			}
		}
	}
	return num;
}
char ans[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(judge(c1)==judge(c2)) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	}
	if(judge(s1)==judge(s2)) cout<<'1';
	else{
		cout<<"000";
		return 0;
	}
	if((('A'<=s1[2] && s1[2]<='C') && ('A'<=s2[2] && s2[2]<='C')) ||('D'<=s1[2] && s1[2]<='E') && ('D'<=s2[2] && s2[2]<='E'))
	{
		cout<<'1';
	}
	else{
		cout<<"00";
		return 0;
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='E')||(s1[2]=='E'&&s2[2]=='D'))
	{
		cout<<'1';
	}
	else{
		cout<<"0";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}