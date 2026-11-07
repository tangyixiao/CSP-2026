#include <bits/stdc++.h>
using namespace std;
int n,arr[200005];
long long ban,ans,num=1,num2;
string s,c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i]>>c[i];
		arr[i]+=arr[i-1];
	}
	ban=arr[n]/2;
	num2=n;
	for(int i=1;i<=ban;i++)
	{
		if(arr[num]<i)
		{
			num++;
		}
		if(arr[num2-1]>=(arr[n]+1-i))
		{
			num2--;
		}
		if(c[num]!=c[num2])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
