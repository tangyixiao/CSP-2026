#include <bits/stdc++.h>
using namespace std;
string s2[10000];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,sum=0,a,num=0,num2=0,x=1;
    string c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>c;
        for(int j=1;j<=a;j++)
        {
            s2[x]=c;
            x++;
            num++;
        }
    }
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    if(n==2)
    {
    	if(s2[1]==s2[2])
    	{
    		cout<<0;
    		return 0;
		}
		else
		{
			cout<<1;
			return 0;
		}
	}
    for(int i=2;i<=num;i++)
    {
        if(s2[i]!=s2[i-1])
        {
            num2++;
        }
    }
    if(num2==0)
    {
        cout<<0;
        return 0;
    }
    for(int i=1;i<=num;i++)
    {
        if(s2[i]!=s2[num+1-i])
        {
            sum++;
            s2[num+1-i]=s2[i];
        }
    }
    cout<<sum;
    return 0;
}
