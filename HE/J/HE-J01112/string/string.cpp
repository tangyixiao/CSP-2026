#include <iostream>
#include <cstring>
using namespace std;
long long n,a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int s[n+6];
	char c[n+6];
	for(int i=1;i<=n;i++)
	{
		cin>>s[i]>>c[i];
	}
	long long l=1,r=n,sum=0,mid=n/2+n%2;
	while(l<=r)
	{
		if(l==r)
		{
			cout<<sum;
			return 0;	
		}
		if(s[l]>s[r])
		{
			if(c[l]!=c[r])
			{
				sum+=s[r];
				s[l]-=s[r];
				r--;
			}
			else
			{
				s[l]-=s[r];
				r--;
			}
		}
		else if(s[l]<s[r])
		{
			if(c[l]!=c[r])
			{
				sum+=s[l];
				s[r]-=s[l];
				l++;
			}
			else
			{
				s[r]-=s[l];
				l++;
			}
		}
		else
		{
			if(c[l]!=c[r]) sum+=s[l];
			l++;
			r--;
		}
	}
	cout<<sum;
	return 0;
}

