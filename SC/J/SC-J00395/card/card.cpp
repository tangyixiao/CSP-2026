#include<bits/stdc++.h>
using namespace std;
int k[500010],u[300010],v[300010];int b,c;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>b>>c;
	for(int i=1;i<=b;i++)
	{
		cin>>k[i];
		u[k[i]]=i;
	}
	for(int i=1;i<=b;i++)
	{
		int r=i;
		while(r<=b)
		{
			v[k[r]]++;
			r=u[k[r]]+1;
		}
	}
	for(int i=1;i<=c;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}