#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,k,ans=LONG_LONG_MIN,a[N];
vector<long long>xz;
//int q;
void dfs(int d,int c){
//	cout<<"dfs("<<d<<","<<c<<")\n";
	if(d>n){
		if(c==k)
		{
//			q++;
//			cout<<"end of "<<q<<":\n";
			long long js=xz[0];
//			cout<<js<<"&";
			for(int i=1;i<k;i++){
				js&=xz[i];
//				cout<<xz[i]<<"&";
			}
//			cout<<"="<<js;
			ans=max(ans,js);
		}
		return ;
	}
	dfs(d+1,c);
	xz.push_back(a[d]);
	dfs(d+1,c+1);
	xz.pop_back();
	return ;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
//	cout<<"cin end!";
	dfs(0,0);
	cout<<ans;
	return 0;
}