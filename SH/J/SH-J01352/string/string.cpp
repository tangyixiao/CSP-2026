#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char s[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string ans;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i] >> s[i];
		for(int j=1; j<=a[i]; j++)
		{
			ans+=s[i];
		}
	}
	int mid=0;
//	cout << ans;
	if(ans.length()%2==1)
	{
		mid=ans.length()/2;
		int sum=0;
		for(int i=0; i<=mid-1; i++)
		{
			if(ans[i]!=ans[ans.length()-i-1])
			{
				sum++;
//				ans[ans.length()-i-1]=ans[i];
			}
		}
//		cout << ans;
		cout << sum;
		return 0;
	}
	else
	{
		int sum=0;
		for(int i=0; i<=ans.length()/2-1; i++)
		{
			if(ans[i]!=ans[ans.length()-i-1])
			{
				sum++;
//				ans[ans.length()-i-1]=ans[i];
			}
		}
//		cout << ans;
		cout << sum;
		return 0;
	}
    return 0;
}
//BABULABIBO
