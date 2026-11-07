#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define up(i,a,b) for(int i=(a);i<=(int)(b);i++)
#define VI vector<int>
using namespace std;
const int NN=5e5+5;
int n,m,a[NN],ans[NN],ed[NN];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	up(i,1,n) cin>>a[i];
	up(i,1,n) ed[a[i]]=i;
	up(i,1,n){
		up(j,i,n){
			ans[a[j]]++;
			if(ed[a[j]]!=0) j=ed[a[j]];
		}
	}
	up(i,1,m) cout<<ans[i]<<" ";
	return 0;
}
