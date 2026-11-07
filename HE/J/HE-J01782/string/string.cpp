#include<bits/stdc++.h>
using namespace std;
string s;
char c;
int n=0,a=0,jsq=1,gai=0;
bool panduan=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		int jiji=jsq+a-1;
		for(int j=jsq;j<=jiji;j++)
		{
			s[j]=c;
		}
		jsq+=a;
		
	}
	
	
	for(int i=1;i<=jsq;i++)
	{
		if(s[i]==s[jsq-i])
			panduan=1;
		if(panduan=0)
			break;
	}
	if(panduan==1)
	{
		cout<<0;
		return 0;
	}
	else
	{
		if(jsq%2==0)
			for(int i=1;i<=jsq/2;i++)
			{
				if(s[i]!=s[jsq-i])
					gai++;
			}
		else
			for(int i=1;i<=(jsq-1)/2;i++)
			{
				if(s[i]!=s[jsq-i])
					gai++;
			}
			
	}
	cout<<gai;
	return 0;
}
