#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>c[i];
	}
	int i=1,j=n;
	while(i<j)
	{
		//cout<<sum<<" "<<a[i]<<" "<<a[j]<<" ";
		//cout<<i<<" "<<j<<"\n";
		if(a[i]==a[j])
		{
			if(c[i]==c[j])
			{
				j-=1;
				i+=1;
			}
			else
			{
				sum+=a[j];
				j-=1;
				i+=1;
			}
		}
		else
		{
			if(a[i]<a[j]){
				if(c[i]==c[j])
				{
					i+=1;
					a[j]-=a[i-1]; 
				}
				else
				{
					sum+=a[i];
					i+=1;
					a[j]-=a[i-1];
				}
			}
			else
			{
				if(c[i]==c[j])
				{
					j-=1;
					a[i]-=a[j+1]; 
				}
				else
				{
					sum+=a[j];
					j-=1;
					a[i]-=a[j+1];
				}
			}
		}
	}
	cout<<sum;
    return 0;
}
//LOVE YKE
