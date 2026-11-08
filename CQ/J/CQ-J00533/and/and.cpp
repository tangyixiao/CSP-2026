#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
bool check(int x){
	int cnt=0;
	for(int i=1;i<=n;i++) if((a[i]&x)==x) cnt++;
	return cnt>=m; 
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=29;i>=0;i--) if(check(ans|(1<<i))) ans|=1<<i;
	cout<<ans;
	return 0;
}
