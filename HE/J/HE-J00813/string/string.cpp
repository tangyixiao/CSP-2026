#include<iostream>
#include<cstring>
using namespace std;
const int N=2e5+5;
long long l[N];
char s[N];
int main()
{
	int n;
	cin>>n;
	string r;

	for(int i=0;i<n;i++)
	{
		cin>>l[i]>>s[i];
		
		}
		for(long long i=0;i<n;i++)
			for(long long j=0;j<l[i];j++)
				r+=s[i];
	
	long long u=r.length()/2;
	long long ans=0;
	long long len=r.length();
	for(long long i=0;i<u;i++)
	{
		if(r[i]!=r[r.length()-i-1])
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;	
 } 


