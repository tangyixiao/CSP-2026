#include<bits/stdc++.h>
using namespace std;
long long n,l,num=0,sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s="",sw="",c;
	string h="";
	for(int i=1;i<=n;i++)
	{
		cin>>l;
		cin>>c;
		h=c;
		num+=l;
		for(int j=1;j<=l-1;j++)
		{
			c+=h;
		}
		s+=c;
	}
	bool flag=1;
	for(int i=0;i<=s.size()-1;i++)
	{
		if(s[i]!=s[num-i]) 
		{
			flag=0;
		}
	}
	if(flag==1) 
	{
		cout<<0;
		return 0;
	}else
	{
		for(int i=0;i<=s.size()-1;i++)
		{
			sw[i]=s[i];
			sw[num-i]=sw[i];
		}
	}	
	for(int i=0;i<=s.size()-1;i++)
	{
		if(s[i]!=sw[i])
		{
			sum++;
		}
	}

	cout<<sum;
	
	return 0;
}