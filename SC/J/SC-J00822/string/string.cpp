#include<bits/stdc++.h> 
using namespace std;

const int N = 2e5+10;
int n;
long long num,ans;
long long a[N];
char c[N],zfc[N],zfc_2[N];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++) 
	{
		cin >> a[i] >> c[i];
		for(int j = 1;j <= a[i];j++) zfc[num+j] = c[i];
		num += a[i];
	}
	for(int i = 1;i <= num/2;i++)
	{
		int j = num-i+1;
		zfc_2[i] = zfc[j];
	}
	for(int i = 1;i <= num/2;i++)
	{
		if(zfc[i] != zfc_2[i]) ans++;
		else continue;
	}
	cout << ans;
	return 0;
}