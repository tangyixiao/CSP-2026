#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct node
{
	int num;
	char c;
};

int n;
const int N = 2e5 + 5;
node arr1[N];
node arr2[N];
node expectation[N]; // 期望数组 
string s1;
string s2;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cin>>arr1[i].num>>arr1[i].c;
	}
	ll ans = 0;
	for(int l = 1, r = n; l < r; )
	{
		if(arr1[l].c == arr1[r].c)
		{
			if(arr1[l].num < arr1[r].num)
			{
				arr1[r].num -= arr1[l].num;
				l++;
			}
			else if(arr1[l].num == arr1[r].num)
			{
				l++;
				r--;
			}
			else
			{
				arr1[l].num -= arr1[r].num;
				r--;
			}
		}
		else
		{
			ans += min(arr1[l].num, arr1[r].num);
			if(arr1[l].num < arr1[r].num)
			{
				arr1[r].num -= arr1[l].num;
				l++;
			}
			else if(arr1[l].num == arr1[r].num)
			{
				l++;
				r--;
			}
			else
			{
				arr1[l].num -= arr1[r].num;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
