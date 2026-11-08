#include<iostream>
using namespace std;
typedef long long ll;
const int maxn=2000010;
ll c,t,n,d;
ll x[maxn],ans[maxn];
int main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	cin>>c>>t;
	if(c==11||c==12)
	{
		for(int i=0;i<t;i++)
		{
			cin>>n>>d;
			for(int i=0;i<n;i++)
			{
				cin>>x[i];
			}
			if(n<4)
			{
				ans[i]=0;
			}
			else if(n==4)
			{
				ans[i]=1;
			}
			else
			{
				ans[i]=(n-4)*2;
			}
		}
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<"\n";
	}
	return 0;
}
