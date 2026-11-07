#include<bits/stdc++.h>
using namespace std;
bool pan(char a,char b)
{
	bool f=0,f2=0;
	if(a>='A'&&a<='F'&&b>='A'&&b<='F')
	{
		f=1;
	}
	if((a=='F'&&b=='D')||(a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='A'&&b=='C')||(b=='F'&&a=='D')||(b=='A'&&a=='B')||(b=='B'&&a=='C')||(b=='A'&&a=='C'))
	{
		f2=1;
	}
	if(f&&f2) return 1;
	else return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string q="",w="";
	if(c1==c2)
	{
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<s1.size()-1;i++)
	{
		q+=s1[i];
	 }
	for(int i=0;i<s2.size()-1;i++)
	{
		w+=s2[i];
	 }
	   //cout<<q<<" "<<w;
	if(q==w)
    {
	    	cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	char o=s1[s1.size()-1],p=s2[s2.size()-1];
	//cout<<o<<' '<<p;
	if(pan(o,p))
	{
		cout<<1;
	}else
	{
		cout<<"00";
		return 0;
	}
	if((o=='F'&&p=='D')||(o=='A'&&p=='B')||(o=='B'&&p=='C'))
	{
		cout<<1;
	}else
	{
		cout<<0;
	}
}
