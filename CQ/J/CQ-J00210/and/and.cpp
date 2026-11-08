#include <bits/stdc++.h>
#define int long long
#define N 400010
#define debug(x) cout<<#x<<" = "<<x<<' '
using namespace std;

int n,m,tot;
int a[N],pos[N],npos[N];

void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],pos[++tot]=i;
}

int solve(){
	int ans=0;
	for(int bit=31;bit>=0;bit--){
		int ntot=0;
		for(int i=1;i<=tot;i++)
			if((a[pos[i]] >> bit) & 1)
				npos[++ntot]=pos[i];
		
//		if(bit == 0){
//			cout<<"Pos = ";
//			for(int i=1;i<=tot;i++) cout<<pos[i]<<' ';
//			cout<<endl;
//		}
		if(ntot >= m){
			ans+=(1LL << bit);
			for(int i=1;i<=ntot;i++) pos[i]=npos[i];
			tot=ntot;
		}
	}
	
	return ans;
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	init();
	cout<<solve()<<"\n";
	return 0;
}
