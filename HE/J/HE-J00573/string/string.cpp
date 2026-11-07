#include<bits/stdc++.h>
using namespace std;
long long int a,n,m,add,l,r;
vector<char> v;
char q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>m;
	while(m--)
	{
		cin>>a>>q;
		n+=a;
		while(a--) v.push_back(q);
	}
	n--;
	r=n;
	while(1)
	{
		
		if(v[l]!=v[r]) add++;
		l++;r--;
		if(l>=r) break;
	}
	cout<<add;
	return 0;
}
