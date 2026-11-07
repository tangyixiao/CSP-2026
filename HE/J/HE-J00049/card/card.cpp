#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005];
string s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	bool o=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i!=1){
			if(a[i]!=a[i-1]){
				o=0;
			}
		}
	}
if(o){
	for(int i=1;i<=m;i++)
	{
		cout<<n<<" ";
	}
}
	return 0;
}
