#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
bool flag[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ans=1<<30;
	ans--;
	for(int t=29;t>=0;t--){
		int val=1<<t,cnt=0;
		for(int i=1;i<=n;i++){
			if((a[i]&val)!=0&&!flag[i]){
				cnt++;
			}
		}
		if(cnt>=m){
			for(int i=1;i<=n;i++){
				if(!(a[i]&val)){
					flag[i]=1;
				}
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!flag[i]){
			cnt++;
			ans&=a[i];
		}
	}
	cout<<ans;
	return 0;
}