#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],vis[200005],ans,num;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=1<<29;i>0;i>>=1){
		num=0;
		for(int j=0;j<n;j++)if(i&a[j]&&!vis[j])num++;
		if(num>=m){for(int j=0;j<n;j++)if(!(i&a[j]))vis[j]=1;ans+=i;}
	}
	cout<<ans;
	return 0;
} 
