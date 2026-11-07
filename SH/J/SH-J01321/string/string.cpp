#include<iostream>
#include<cstdio>
using namespace std;
struct E
{
	long long aa;
	char cc;
};
E arr[200002];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char c;
		cin>>a>>c;
		arr[i].aa=a;
		arr[i].cc=c;
	}
	long long s=0;
	int shou=1;
	int wei=n;
	while(shou<wei)
	{
		long long a=arr[shou].aa;
		long long b=arr[wei].aa;
		if(arr[shou].aa==arr[wei].aa&&arr[shou].cc==arr[wei].cc)
		{
			shou++;
			wei--; 
		}
		else if(arr[shou].cc==arr[wei].cc)
		{
			if(a>b)
			{
				a-=b;
				b=0;
				wei--;
			}
			else
			{
				b-=a;
				a=0;
				shou++;
			}
			arr[shou].aa=a;
			arr[wei].aa=b;
		}
		else
		{
			if(a>b)
			{
				s+=b;
				a-=b;
				b=0;
				wei--;
				arr[shou].aa=a;
			
			}
			else if(a<b)
			{
				s+=a;
				b-=a;
				a=0;
				shou++;
				arr[wei].aa=b;
				
			}
			else if(a==b)
			{
				s+=a;
				
				a=0;
				b=0;
				arr[wei].aa=b;
				arr[shou].aa=a;
				shou++;
				wei--;
			}
			
		}
	}
	cout<<s;
	return 0;
}
