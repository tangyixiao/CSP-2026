#include <bits/stdc++.h>

using namespace std;

int chexiangr,chexiangx;
string zuoweir,zuoweix; 
int a[5],b[5]; 
bool flag;

int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>chexiangr;
	cin>>zuoweir;
	cin>>chexiangx;
	cin>>zuoweix;
	if(zuoweir==zuoweix)
	{
		cout<<"0000";
		return 0;
	}
	if(chexiangr==chexiangx)
	{
		cout<<"1"; 
	} 
	else
	{
		cout<<"0"; 
	}
	for(int i=0;i<2;i++)
	{
		a[i]=zuoweir[i]-'0';
		b[i]=zuoweix[i]-'0';
	} 
	if(a[0]*10+a[1]==b[0]*10+b[1])
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if(a[0]*10+a[1]==b[0]*10+b[1]&&(((zuoweir[2]=='A'||'B'||'C')&&(zuoweix[2]=='A'||'B'||'C'))||((zuoweir[2]=='D'||'F')&&(zuoweix[2]=='D'||'F'))))
	{
		cout<<"1";
		if((zuoweir[2]=='A'&&zuoweix[2]=='B')||(zuoweir[2]=='B'&&zuoweix[2]=='C')||(zuoweir[2]=='D'&&zuoweix[2]=='F')||(zuoweir[2]=='B'&&zuoweix[2]=='A')||(zuoweir[2]=='C'&&zuoweix[2]=='B')||(zuoweir[2]=='F'&&zuoweix[2]=='D'))
		{
			cout<<"1";
			flag++;
		}
	}
	else
	{
		cout<<"0";
	}
	if(flag==0)
	{
		cout<<"0";	
	} 
	return 0;
}
