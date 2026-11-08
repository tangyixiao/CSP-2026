#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool vis[200005];
long long ans=0;
void aa(int step,long long cnt){
	if(step==m){
		if(cnt>=ans) ans=cnt;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			aa(step+1,(cnt&a[i]));
			vis[i]=0;
		}
	}
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		long long s=a[i];
		aa(1,s);
		vis[i]=0;
	}
	cout<<ans;
	return 0;
}
