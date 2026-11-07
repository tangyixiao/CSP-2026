#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int arr[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+1+n);
	int mid = (1+n)>>1;
	cout<<arr[mid];
	return 0;	
} 
