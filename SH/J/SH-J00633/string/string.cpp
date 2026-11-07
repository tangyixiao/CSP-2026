#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 10;

int n;
int arr[N];
char ch[N];
int ans = 0;

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out","w", stdout);
	
	cin>>n;
	int m = 0;
	for(int i = 1; i <= n ; i++)
	{
		int u; char v;
		cin>>u>>v;
		if(m > 0 && v == ch[m])
		{
			arr[m] += u;
		}
		else
		{
			m ++;
			arr[m] = u;
			ch[m] = v;
		}
	}
	
	for(int i = 1, j = m; i < j;)
	{
		if(ch[i] == ch[j])
		{
			if(arr[i] == arr[j])
			{
				i ++;
				j --;
			}
			else if(arr[i] < arr[j])
			{
				arr[j] -= arr[i];
				i ++;
			}
			else if(arr[i] > arr[j])
			{
				arr[i] -= arr[j];
				j --;
			}
		}
		else
		{
			if(arr[i] == arr[j])
			{
				ans += arr[i];
				i ++;
				j --;
			}
			else if(arr[i] < arr[j])
			{
				arr[j] -= arr[i];
				ans += arr[i];
				i ++;
			}
			else if(arr[i] > arr[j])
			{
				arr[i] -= arr[j];
				ans += arr[j];
				j --;
			}
		}	
	}
	cout<<ans<<endl;
	return 0;
}
