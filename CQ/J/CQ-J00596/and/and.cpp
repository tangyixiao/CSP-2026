#include<bits/stdc++.h>
#define N 200005
typedef long long ll;
using namespace std;
ll n,arr[N],m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(m==1)cout<<arr[n-1];
	else cout<<arr[n-n/5];
	return 0;
}
