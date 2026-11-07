#include<iostream>
#include<cstdio>
using namespace std;

long long n,cnt,num[200005];
char a[200005];

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> num[i] >> a[i];
    }
    for(int i=1,j=n;i<j;)
    {
        if(a[i]!=a[j])
        {
        	if(num[i]>num[j])
        	{
        		num[i]-=num[j];
        		cnt += num[j];
        		j --;
			}
			else if(num[i]<num[j])
			{
				num[j]-=num[i];
				cnt += num[i]; 
				i ++;
			}
			else
			{
				cnt += num[i];
				i ++,j --;
			}
		}
		else
		{
			if(num[i]>num[j])
        	{
        		num[i]-=num[j];
        		j --;
			}
			else if(num[i]<num[j])
			{
				num[j]-=num[i];
				i ++;
			}
			else
			{
				i ++,j --;
			}
		}
		
    }
    cout << cnt;
    return 0;
}
