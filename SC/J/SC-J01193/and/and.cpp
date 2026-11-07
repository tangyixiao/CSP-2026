#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define F_up(x,y,z) for(int x=y;x<=z;x++)
#define F_down(x,y,z) for(int x=y;x>=z;x--)
#define F_in(x,y) for(auto x:y)
#define W(t) while(t--)
#define WALL while(1)
using namespace std;
int n,m;
int a[200005];
int ans=0;
bool vis[200005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	F_up(i,1,n){
		cin>>a[i];
	}F_down(j,30,0){
		int can_use=0;
		F_up(i,1,n){
			if(vis[i]) continue;
			if((1<<j)&a[i]){
				can_use++;
			}
		}if(can_use>=m){
			ans+=(1<<j);
			F_up(i,1,n){
				if((1<<j)&a[i]){
				}else vis[i]=1;
			}
		}
	}cout<<ans;
	return 0;
}
