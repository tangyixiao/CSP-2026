#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct q{
	long long len;
	char c;
}a[N];
long long n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].len>>a[i].c;
	long long l=1,r=n;
	while(l<r)
	{
		if(a[l].len>a[r].len)
		{
			a[l].len-=a[r].len;
			if(a[l].c!=a[r].c)
				ans+=a[r].len;
			r--;
		}
		else if(a[l].len<a[r].len)
		{
			a[r].len-=a[l].len;
			if(a[l].c!=a[r].c)
				ans+=a[l].len;
			l++;
		}
		else
		{
			if(a[l].c!=a[r].c)
				ans+=a[l].len;
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}