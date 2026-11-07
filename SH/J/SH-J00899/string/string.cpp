
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
long long input1[200010][2];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,leng=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	long long ai;
    	char ci;
    	scanf("%lld %c",&ai,&ci);
    	input1[i][0]=ai;
    	input1[i][1]=ci-'a'+1;
    	leng+=ai;
	}
	long long l=leng/2;
	long long s1=0,s2=leng;
	long long x1=0,x2=n+1;
	long long num1=0,num2=0;
	long long char1=0,char2=0; 
	long long ans=0;
	while(x1<=x2)
	{
		if(s1==l && s2==leng-l)break;
		//·´¶ÎÊ£µÃ¶à 
		if(num2>0 || (num1==0 && num2==0)) 
		{
			x1++;
			if(s1+input1[x1][0]<=l) 
			{
				num1=input1[x1][0];
				char1=input1[x1][1];
				s1+=input1[x1][0];
			}
			else
			{
				num1=l-s1;
				s1=l;
				char1=input1[x1][1];
			}
			
		}
		else
		{
			x2--;
			if(s2-input1[x2][0]>=leng-l)
			{
				num2=input1[x2][0];
				char2=input1[x2][1];
			}
			else
			{
				num2=s2-(leng-l);
				s2=leng-l;
				char2=input1[x2][1];
			}
	
		}
		//cout<<num1<<" "<<num2<<endl;
		//cout<<char1<<" "<<char2<<endl;
	 	if(char1==char2)
			{
				if(num1>=num2)
				{
					num1-=num2;
					num2=0;
				}
				else 
				{
					num2-=num1;
					num1=0;
				}
			}
			else
			{
				if(num1>=num2)
				{
					ans+=min(num1,num2);
					num1-=num2;
					num2=0;
				}
				else 
				{
					ans+=min(num1,num2);
					num2-=num1;
					num1=0;
				}
			}
	}
	cout<<ans;
    return 0;
}
