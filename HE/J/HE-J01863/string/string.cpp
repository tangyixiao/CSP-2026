#include<iostream>
#include<string>
using namespace std;
struct T{
	long long num;
	char c;
} a[200005],a1[200005];
long long n,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].num>>a[i].c;
	string s=" ";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i].num;j++)
		s+=a[i].c;
	}
	int L=s.length();
	for(int i=1;i<=L/2;i++)
	{
		if(s[i]!=s[L-i])
			ans++;
	}
	/*int strsize=0;
	for(int i=1;i<=n;i++)
	{
		strsize+=a[i].num;
	}
	strsize/=2;
	int little=0;
	for(int i=1;little<=strsize;i++)
	{
		little+=a[i].num;
	}
	cout<<strsize-little;*/
	cout<<ans;
}
