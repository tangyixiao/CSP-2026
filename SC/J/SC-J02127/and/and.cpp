#include<bits\stdc++.h> 
using namespace std;
long long a[200005],ans=0;
vector<long long> q[40];
int main()
{
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int now=31;
	for(int i=1;i<=n;i++)q[now].push_back(a[i]); 
	for(int i=30;i>=0;i--){
		long long x=1<<i; 
		for(int j=q[now].size()-1;j>=0;j--){
			
			if(q[now][j]&x)q[i].push_back(q[now][j]);
		}
		if(q[i].size()>=m){
			ans+=x;
			now=i; 
		} 
	}
	
	cout<<ans;
}