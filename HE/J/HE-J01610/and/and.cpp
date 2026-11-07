#include<bits/stdc++.h>
using namespace std;

int s[999]={0};//int s[b];
int main()
{
//	int n,m,s;
//	cin>>n>>m;
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

    int n,m,b1=0,b2=0,b;
    int s1[999]={0},s2[999]={0};
	int a[n];
    cin>>n>>m;
    for(int o=0;o<n;o++)
    {
    	cin>>a[o];
	}
	// ‰»Î 
    for(int j=0;j<n;j+=2)
    {
    	for(int i=0;a[j]!=0;i++)
	    {
	    	s1[i]=a[j]%2;
	     	a[j]/=2;
	     	b1++;
      	}
      	for(int p=0;a[j+1]!=0;p++)
      	{
      		s2[p]=a[j+1]%2;
	     	a[j+1]/=2;
	     	b2++;
		}
		if(b1>b2)
		{
			b=b2;
		}
		else
		{
			b=b1;
		}
		
		for(int u=b;u>=0;u--)
		{
			if((s1[u]==s2[u])&&(s1[u]==1))
			{
				s[u]=1;
			}
			else 
			{
				s[u]=0;
			}
			//cout<<s[u];
			
		}
      	
	}
	int sz=0;
	for(int x=2,x1=1;x*=2,x1++;x1<b)
	{
		sz+=s[x1]*x;
	}
	if(s[0]==1)
	{
		sz+=1;
	}
	cout<<sz;
    
  	
	
	
	fclose(stdin);
    fclose(stdout);
	return 0;
}
