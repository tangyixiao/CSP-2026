#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e5+10;
stack<int> s; 
int n,m,a[maxn],ans[maxn];
bool f[maxn];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=n-1;i>=0;i--)
	{
//		cout<<a[i]<<' '<<f[a[i]]<<'\n';
		if(!f[a[i]])
		{
//			cout<<1<<endl;
			s.push(a[i]);
		}
		else
		{
//			cout<<2<<' '<<s.top()<<' '<<endl;
			while(s.size()&&s.top()!=a[i])
			{
//				cout<<s.top()<<' ';
				f[s.top()]=0;
				s.pop();
			}
		}
		f[a[i]]|=1;
//		for(int j=1;j<=m;j++) cout<<f[j]<<' ';
//		cout<<endl;
		for(int j=1;j<=m;j++) if(f[j]) ans[j]++;
//		for(int j=1;j<=m;j++) cout<<ans[j]<<' ';
//		cout<<endl;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
}
//4 3
//1 2 1 3
//10 3
//3 1 2 1 3 2 3 1 2 1

