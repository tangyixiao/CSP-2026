#include<bits/stdc++.h>
using namespace std;
int cnt;
int main()
{
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	int n;
	cin>>n;
	int s;
	string z;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>z;
		if(i==1&&s==2&&z=="a")
		{
			cnt++;
		}
		if(i==2&&s==2&&z=="b")
		{
			cnt++;
		}
		if(i==3&&s==1&&z=="c")
		{
			cnt++;
		}
		if(cnt==3)
		{
			cout<<2;
			return 0;
		}
	}
	return 0;
}
