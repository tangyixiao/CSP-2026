#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5;
int n,m;
int a[N],nst[N],ans[N];
struct Link{
	int l,r;
}link[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)link[i].r=n+(int)1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		link[i].l=nst[a[i]];
	    link[nst[a[i]]].r=i;
		nst[a[i]]=i;
	}
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;){
			if(link[i].r==n+1){
				ans[a[i]]++;
				i++;
			}
			else{
				i=link[i].r;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
//衔烛而行，以照幽明