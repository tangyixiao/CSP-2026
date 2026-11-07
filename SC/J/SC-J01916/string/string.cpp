#include <iostream>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
int a[N];
char c[N];
int n;
ll mid,tot = 0;
ll l=0;
ll ans = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> a[i] >> c[i];
		tot += a[i];
	}
	mid = tot >> 1;
	int i = 0,j = n-1;
	char las1,las2;int sum1=0,sum2=0;//上一次匹配，那边还剩下了 num个las;
	//--------------------------------------
	las1 = c[i],sum1 = a[i];i++;//i.j指向还没被开发的 
	while((l+(sum1+ sum2)<= mid) && i < j)
	{
		if(sum1)//上次左边还有剩的 
		{
			if(a[j] < sum1)
			{
				ans += a[j]*(c[j]!=las1);
				sum1 -= a[j]; l+=a[j];j--;
			}else if(a[j] == sum1)
			{
				ans += a[j]*(c[j]!=las1);
				l+=sum1;
				if(i+1<j)
				{
					sum1 = a[i];las1 = c[i++];j--;
				}
				else
				{
					sum1 = 0;sum2 = 0;i++;j--;
				}     
			}else
			{
				ans += sum1*(c[j]!=las1);
				sum2 = a[j] - sum1;las2=c[j--];
				l+=sum1;sum1 = 0; 
			}
		}else if(sum2)
		{
			if(a[i] < sum2)
			{
				ans += a[i]*(c[i]!=las2);
				sum2 -= a[i]; l+= a[i];i++;
			}else if(a[i] == sum2)
			{
				ans += a[i]*(c[i]!=las2);
				l+= sum2;
				if(i+1<j)
				{
					sum2 = a[j];las2 = a[j--];i++;
				}
				else
				{
					sum1=0;sum2 = 0;i++;j--;
				}     
			}else
			{
				ans += sum2*(c[i]!=las2);
				sum1 = a[i] - sum2;las1=c[i++];
				l += sum2;sum2 = 0;
			}
		}
	}
	if(sum1)
	{
		if(las1 != c[j])
		{
			ans += min(sum1,a[j]);
		}
	}else if(sum2)
	{
		if(las2 != c[i])
		{
			ans += min(sum2,a[i]);
		}
	}
	cout << ans;
}