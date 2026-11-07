#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s=0,s1=0,az=0;
	//char s[999999];
	cin>>n;
	int a[n];char c[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
		s+=a[i];
    }
    for(int j=0;j<n-1;j++)
    {
    	if(c[j]!=c[j+1])
    	{
    	    s1++;	
		}
	}
	if(n==1)
	{
		cout<<0;
	}
	else if(s1==0)
	{
		cout<<0;
	}
	else if(n==2)
	{
		if(a[0]<=a[1])
		{
			cout<<a[0];
		}
		else{
			cout<<a[1];
		}
		
	}
	else
	{
		cout<<s/2;
	}
    
    
    
    fclose(stdin);
    fclose(stout);
	return 0;
}
