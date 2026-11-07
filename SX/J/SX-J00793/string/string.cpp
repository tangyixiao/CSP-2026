#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
long long l = 0,ans;
int n;

char search1(int m)
{
	int j;
	for(int i = 1;i<=n;i++)
	{
		m -= a[i];
		j = i;
		if(m<=0) break;
	}
	return c[j];
}  //Ñ°ÕÒµÚmÏî

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		l += a[i];
	}
//	cout<<l;
	for(int i = 1;i<=l/2;i++)
	{
		if(a[i] == a[n-i+1])
		{
			if(search1(i) != search1(l-i+1)) ans+=a[i];
//			cout<<search1(i)<<" "<<search1(l-i+1)<<endl;
			i+=a[i];
			continue;
		}
		else if(search1(i) != search1(l-i+1)) ans++;
//		
	}
	cout<<ans;
	return 0;
}
