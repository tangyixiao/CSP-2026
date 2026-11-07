#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],sum,l,r,m;
string L;
char s[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
	}
	l=1,r=n;
	while(l<r)
	{
		if(s[l]==s[r])
		{
			if(a[l]>a[r])
			{
				m=a[l]-a[r];
				a[l]=m;
				r--;
			}else if(a[l]<a[r]){
				m=a[r]-a[l];
				a[r]=m;
				l++;
			}
		}else{
			if(a[l]>a[r])
			{
				m=a[l]-a[r];
				sum+=m;
				a[l]=m;
				r--;
			}else if(a[l]<a[r]){
				m=a[r]-a[l];
				sum+=m;
				a[r]=m;
				l++;
			}else{
				m=a[l];
				sum+=m;
				l++,r--;
			}
		}
	} 
	cout<<sum;
	return 0;
}