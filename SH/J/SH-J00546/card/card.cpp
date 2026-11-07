#include<bits/stdc++.h>
using namespace std;
struct data{int n,mag;};
void solve(){
	int n,m;cin>>n>>m;
	vector<data> a(n+1);
	vector<int> pot(m+1,-1);
	vector<int> ans(m+1,0);
	for(int i=1;i<=n;i++){
		int tmp;cin>>tmp;
		if(pot[tmp]!=-1){
			//cout<<"Old "<<tmp<<" find! "<<pot[tmp]<<'\n';
			for(int j=pot[tmp]+1;j<i;j++){
				a[j].mag=max(a[j].mag,pot[tmp]);
				//cout<<"a["<<j<<"].mag="<<pot[tmp]<<'\n';
			}
		}
		pot[tmp]=i;
		a[i]={tmp,0};
	}
	for(int i=1;i<=n;i++){
		//cout<<"a["<<i<<"]={"<<a[i].n<<','<<a[i].mag<<"}\n";
		ans[a[i].n]+=i-a[i].mag;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

