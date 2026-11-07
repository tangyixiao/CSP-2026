#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
long long a[N];
char c[N];
int main()
{
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,k,l=0;
	string s;
	char t;
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		cin>>k>>t;l+=k; 

		for(long long j=0;j<k;j++)
		{
			s+=t;
		}
	}
	int sum=0;

		for(long long i=0;i<l/2-1;i++)
		{
			if(s[i]!=s[l-i-1])
			{
				sum++;
			}
		}
	cout<<sum;
}