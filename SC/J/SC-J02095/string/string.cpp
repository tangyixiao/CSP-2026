#include<bits/stdc++.h>
using namespace std;
long long n;
long long m=0;
long long num[300000];
char s[300000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		cin>>s[i];
	}
	long long a=0,b=n-1;
	while(a<b)
	{
		if(num[a]<num[b])
		{
			if(s[a]!=s[b])
			{
				m+=num[a];
			}
			num[b]-=num[a];
			num[a]=0;
			a++;
		}
		else{
			if(s[a]!=s[b])
			{
				m+=num[b];
			}
			num[a]-=num[b];
			num[b]=0;
			b--;
		}
//		cout<<a<<" "<<num[a]<<endl;
//		cout<<b<<" "<<num[b]<<endl;
//		cout<<m<<endl;
	}
	cout<<m;
	return 0;
}