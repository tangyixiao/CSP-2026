#include <bits/stdc++.h>
using namespace std;
int t[1000000000];
int x[1000000000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,k=0,b=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>t[i];
		cin>>x[i];
		b+=t[i];
		if(!x[i])
		{
		    k++;
			x[i]=true;
		}
	}
	cout<<b/k+1;
	cout<<k;
	return 0;
}
