#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b,c=0,m=0,u=1;
	char e,n[2000200];
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>b>>e;
		u=1;
		for(int o=1;o<=b;o++)
	{
		c++;
		n[c]=e; 
	}
	}
	long long p=c;
	while(p>u)
	{
		if(n[u]==n[p])
		{
			u++;
			p--;
		}
		else
		{
			u++;
			p--;
			m++;
		}
	}
	


	
		
	cout<<m;
				return 0;
} 
