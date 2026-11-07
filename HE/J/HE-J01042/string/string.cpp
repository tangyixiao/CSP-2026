#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
string s;
int ss(int l,int r,int ans)
{
	if(l >= r) return 0;
	if(s[l] == s[r])
	{
		l++;
		r--;
	}
	else
	{
		int del = ss(l,r--,ans+1);
		int cha = ss(l++,r--,ans+1);
		int der = ss(l++,r--,ans+1);
		ans = min(del,cha);
		ans = min(ans,der);
	}
	return ans;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		string c;
		cin >> a[i] >> c;
		for(int j = 1;j <= a[i];j++)
		{
			s+=c;
		}
	}
    int lenn = s.size()-1;
    cout << ss(0,lenn,0);
	return 0;
}
