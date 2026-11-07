#include<bits/stdc++.h>
using namespace std;
int a[100005];
string b[1000][100];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in ","r",stdin);
	freopen("and.out ","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1,cmp);
    if (m==1)
    {
		cout<<a[0]; 
		return 0;           	
	}
    if (m!=n)
    {
        for (int i=0;i<n;i++)
	    {
		    if (a[i]%2==1)
		    {
		        while(a[i])
				{
					int c=a[i]%2;
					int d=a[i]/2;
				    string b[i]+=char(c);    	
				}	
			}			
	    }
	    for (int i=0;i<m;i++)
			{
				if(s[i][i]=='0' || s[i+1][i]=='0')
				{
					s[i+1][i]='0';
				}
			}
	}
	return 0;
}
