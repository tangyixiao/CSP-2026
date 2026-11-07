#include<bits/stdc++.h>
using namespace std;
long long sum,num;
int a[200015];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin>>n;
	char x;
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>x;
		sum+=a[i];
		for(int j=sum-a[i];j<=sum;j++)
		{
			s[j]=x;
		}
	}
	for(int i=0;i<sum/2;i++)
	{
		if(s[i]!=s[sum-i])
		{
			num++;
		}
	}
	cout<<num;
	return 0;
}