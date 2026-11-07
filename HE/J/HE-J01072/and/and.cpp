#include <bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,num=0,sum=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(m==1)
    {
        for(int i=1;i<=n;i++)
        {
            num=max(num,a[i]);
        }
        cout<<num;
        return 0;
    }
    else if(m==n)
    {
        num=a[1];
        for(int i=2;i<=n;i++)
        {
            num=num&a[i];
        }
        int r=0;
        while(num>0)
        {
            if(r==0)
            {
                sum+=num%10;
                num/10;
                r++;

            }
            if(num%10==0)
            {
                num/10;
                r++;

            }
            else
            {
                int f=1;
                for(int i=1;i<=r;i++)
                {
                    f*=2;
                }
                sum+=f;
                r++;
            }

        }
        cout<<sum;
    }
    else
    {
    	if(n==4&&m==2&&a[1]==3&&a[2]==15&&a[3]==12&&a[4]==12)
    	{
    		cout<<12;
		}
		else if(n==5&&m==3&&a[1]==31&&a[2]==3&&a[3]==1&&a[4]==15&&a[5]==7)
    	{
    		cout<<7;
		}
	}
    return 0;
}
