#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[500005],m;
map<int,int>jl;
map<int,int>bj;
queue<int>q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		if(bj[a[i]]==0){
			q.push(a[i]);
		}else{
			while(!q.empty()) q.pop();
			q.push(a[i]);
		}
	}
	return 0;
}