#include<bits/stdc++.h>
using namespace std;
struct a
{
	int s;
	char z;
}w[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long ans = 0; 
	for(int i = 1;i <= n;i++)
	{	
		cin>>w[i].s>>w[i].z;
		ans += w[i].s;
	}
	if(n == 1)
	{
		cout<<n;
	}
	else if(n == 2)
	{
		if(w[1].z == w[2].z)
		{
			cout<<0;
		}
		else
		cout<<min(w[1].s,w[2].s);
	}
	return 0;
}
//and or not int long long short double float struct char for if while do operator return union
