#include<bits/stdc++.h>
using namespace std;
long long n,a[300005];
string c[300005];
long long sz,sy,ans;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i]>>c[i];
	long long l = 1,r = n;
	while(l <= r)
	{
		if(sz == 0 && sy == 0)
		{
			if(c[l] == c[r])
			{
				if(a[l] > a[r]) sz = a[l] - a[r],r--,s = c[l];
				else if(a[l] == a[r]) l++,r--;
				else sy = a[r] - a[l],l++,s = c[r];
			}
			else
			{
				if(a[l] > a[r]) sz = a[l] - a[r],ans += a[r],s = c[l],r--;
				else if(a[l] == a[r]) ans += a[l],l++,r--;
				else ans += a[l],sy = a[r] - a[l],l++,s = c[r];
			}
		}
		else if(sz != 0)
		{
			if(s == c[r])
			{
				if(sz > a[r]) sz -= a[r],r--;
				else if(sz == a[r]) sz = 0,r--,l++;
				else a[r] -= sz,sz = 0,l++;
			}
			else 
			{
				if(sz > a[r]) ans += a[r],sz -= a[r],r--;
				else if(sz == a[r]) sz = 0,ans += a[r],r--,l++;
				else ans += sz,a[r] -= sz,sz = 0,l++;
			}
		}
		else
		{
			if(s == c[l])
			{
				if(sy > a[l]) sy -= a[l],l++;
				else if(sy == a[l]) sy = 0,l++,r--;
				else a[l] -= sy,sy = 0,r--;
			}
			else 
			{
				if(sy > a[l]) ans += a[l],sy -= a[l],l++;
				else if(sy == a[l]) sy = 0,ans += a[l],l++,r--;
				else ans += sy,a[l] -= sy,sy = 0,r--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
