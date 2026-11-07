#include<bits/stdc++.h> 
using namespace std;
struct pp{
	int x,y;
}pre[200005];
int a[2000005];
void k(int n){
	for(int i=1;i<=n;i++){
        pre[i].y=a[i];
		int x=1;
		int cnt=0;
		while(x<a[i]){
			x*=2;
			cnt++;
		} 
		pre[i].x=cnt-1;
	}
}
bool cmp(pp a,pp b){
    return a.x>b.x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	k(n);
	sort(pre+1,pre+n+1,cmp);
	int ans=pre[1].y;
	for(int i=2;i<=m;i++){
		ans=ans&pre[i].y;
	} 
	cout<<ans<<endl;
	return 0;
}