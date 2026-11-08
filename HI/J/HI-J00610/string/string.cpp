#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long num=0;
	long long sum=0;
	cin>>n;
	bool f=0;
	long long test;
	string s;
	char tmp[1];
	for(long long i=0;i<n;i++)
	{
		cin>>test;
		
		f=0;
		for(long long j=sum;j<test+sum;j++)
		{
		//	cout<<"进入循环";
			if(f==0)
			{
				cin>>tmp[0];
			}

			f=1;
			s[j]=tmp[0];
		//	cout<<s[j];
		}
		sum+=test;
	}
    
	bool fq=1;
	for(long long i=0;i<sum;i++)
	{
		if(s[i]==s[sum-i-1])
		{
			continue;
		}
		else
		{
			fq=0;
			break;
		}
		
	}
    if(fq==1)
    {
    	cout<<0;
    	return 0;
	}
	else
	{
		for(long long i=0;i<sum;i++)
		{
			if(s[i]!=s[sum-i-1])
	   	    {
		    	s[i]=s[sum-i-1];
		    	num++;
	    	}
	    	else
	    	{
	    		continue;
			}
		}
	}
	cout<<num;
	//此题真是没办法了。溢出就溢出吧。……………………………… 
	return 0;
}
