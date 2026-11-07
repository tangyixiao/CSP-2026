#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_BIT=30;
ll p[MAX_BIT+5];
void insert(ll x)
{
   for(int i=MAX_BIT;i>=0;i--)
   {
	if((x>>i)&1)
	{
		if(!p[i])
		{
			p[i]=x;
			break;
		}
		x^=p[i];
	}
   }
}
ll query_max()
{
	ll res=0;
	for(int i=MAX_BIT;i>=0;i--)
	{
		if(res^p[i]>res)
		{
			res^=p[i];
		}
	}
	return res;
}
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		insert(x);
	}
	cout<<query_max()<<"\n";
	return 0;
}
