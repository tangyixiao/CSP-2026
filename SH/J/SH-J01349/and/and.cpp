#include<bits/stdc++.h>
using namespace std;
string s[100001];
long long minn=1048576*2048;
void re(int a,int i)
{
    int q=0;
    for(int j=1;;j++)
    {
        if(a==0)
        {

            break;
        }
        s[i][q]=a%2;
        a/=2;
        q++;
    }

    return;
}
int x(int n)
{

    int cm=1;
    for(int i=1;i<=n;i++)
    {
        cm*=10;
    }
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 

    int n,m,b;
    cin>>n>>m;
    if(m==n)
	{
		cin>>b;
		int ans=b;
		for(int i=1;i<=n;i++)
    	{
    	    cin>>b;
   	        ans=ans&b;
            
    	}
	}
	if(m-1==n)
	{
		cin>>b;
		long long ans=b,ct=1048576*2048;
		for(int i=1;i<=n;i++)
    	{
    	    cin>>b;
    	    if(b<minn)
    	    {
    	    	ct=b;
    	    	ans=ct&ans;
    	    	minn=ct;
			}
			else
			{
			
   	        	ans=ans&b;
        	}
    	}
	} 
	int ma=0;
    for(int i=0;i<=n;i++)
    {
        cin>>b;
       
        ma=max(ma,b);
       
    }
    if(m==1)
    {
        cout<<ma;
    }
    
    
    return 0;
}
