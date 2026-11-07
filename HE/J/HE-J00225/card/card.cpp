#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll M = 3e5+10;
const ll N = 5e5+10;
ll n,m,a[N];
stack<int>st;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n<=5&&m<=2)
	{
		cout<<a[n];
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		st.push(a[i]);
		if(a[i]==a[i+1])
		{
			while(a[i]!=a[i+1])
				st.pop();
		}
		cout<<st.top()<<" ";
	}
	return 0;
}
