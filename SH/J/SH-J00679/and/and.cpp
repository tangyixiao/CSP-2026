#include<bits/stdc++.h>
using namespace std;

int n, m;

const int N = 2e5 + 5;
int arr[N];

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++) cin>>arr[i];
	sort(arr + 1, arr + n + 1, cmp);
	int ans = arr[1];
	int cnt = 1;
	for(int i = 2; i <= n; i++)
	{
		if((ans & arr[i]) == 0) continue;
		ans &= arr[i];
		cnt++;
		if(cnt == m) break;
	}
	cout<<ans;
//	cout<<cnt<<" ";
//	if(cnt < m) cout<<0;
//	else cout<<ans; 
	return 0;
}
