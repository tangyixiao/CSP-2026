#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n,z,s=0,o,k=0;
	char x;
	cin>>n;
	string a,b;
	for(int i=0;i<n;i++)
	{
		cin>>z>>x;
		s+=z;
		
		for(int i=0;i<=z;i++)
		{
			a[i]=x; 
		}
	}
	o=s/2;
	if(s%2==0)
	{
		for(int i=0;i<o;i++)
	{
		for(int j=s;j>=o;j--)
		{
			if(a[i]==a[j-1])
			{
				k+=0;
				
			}else
			{
			k++;	
			}
			i++;
		}
		break;
	}
	}
	else
	{
		
		for(int i=0;i<o;i++)
	{
		for(int j=s-1;j>o;j--)
		{
			if(a[i]==a[j-1])
			{
				k+=0;
			}else
			{
			k++;	
			}
			i++;
			
		}cout<<k;
		break;
		
	}
	}
	
	return 0;                                                            
}
