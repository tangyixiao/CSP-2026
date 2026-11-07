#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long T,n=0,a,sum=0;
	string s;
	char d;
	cin>>T;
	while(T--)
	{
		cin>>a>>d;
		n+=a;
		for(int i=1;i<=a;i++) s+=d;
    }
	n/=2;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=s[n-i+1]) sum++;
	}
	cout<<sum;
	return 0;
}