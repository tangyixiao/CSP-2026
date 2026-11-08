#include<bits/stdc++.h>
using namespace std;
long long n,m,ans=0;
long long a[200500];
int vis[200500] = {0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin >> n >> m;
	//max:1<<29
	for(int i=0;i<n;i++)cin >> a[i];
	int gs=0,scyx=0;
	
	int i;
	for(i=29;i>=0;i--){
		gs=0;
		for(int j=0;j<n;j++){
			if((a[j]&(1<<i))&&vis[j]>=scyx){
				vis[j] = 40-i;
				gs++;
			}
		}
		if(gs>=m){
			scyx = 40-i;
			ans+=(1<<i);
		}
	}
	cout << ans;
    return 0;
}
