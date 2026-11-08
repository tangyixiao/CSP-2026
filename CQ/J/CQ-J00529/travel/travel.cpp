#include<bits/stdc++.h>
using namespace std;
int main(){
	string c1,s1,c2,s2;
	int q=0,w=0; 
	cin>>c1>>s1>>c2>>s2;
	int u=1;
	for(int i=c1.size()-1;i>=0;i--)
	{
		q+=(c1[i]-'0')*u;
		u=u*10;
	}
	int f=1;
	for(int i=c2.size()-1;i>=0;i--)
	{
		w+=(c2[i]-'0')*f;
		f=f*10;
	}
	if(q==w)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	int j=(s1[0]-'0')*10+s1[1]-'0';
	int k=(s2[0]-'0')*10+s2[1]-'0';
	if(j==k)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	int o=s1[2],p=s2[2];
	if(o=='F'&&p=='D'||o=='D'&&p=='F'||o=='A'&&p=='B'||o=='A'&&p=='C'||o=='B'&&p=='C'||o=='B'&&p=='A'||o=='C'&&p=='A'||o=='C'&&p=='B')
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(o=='F'&&p=='D'||o=='D'&&p=='F'||o=='A'&&p=='B'||o=='B'&&p=='C'||o=='B'&&p=='A'||o=='C'&&p=='B')
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	
	return 0;
}
