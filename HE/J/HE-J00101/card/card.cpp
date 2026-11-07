#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n , m;
int a[N],ans[N];
struct node{
	int sl,la;
};
map<int,int>mp;
int q[N],cnt;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i <= n; i++)cin>>a[i];
	for(int i=1; i <= n; i++){
		mp.clear();
		for(int j=i;j<=n;j++){
			mp[a[j]]++;
		}
		if(mp[1])ans[1]++;
		if(mp[2])ans[2]++;
	}
	for(int i=1; i <= m; i++)cout<<ans[i]<<' ';
	return 0;
} 
