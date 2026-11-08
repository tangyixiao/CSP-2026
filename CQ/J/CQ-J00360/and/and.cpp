#include <bits/stdc++.h>
using namespace std;
long long int n,m,a[200005],ans;
void dfs(int g,int mm,long long int anss){
	//cout<<anss<<" "<<a[g]<<" "<<g<<endl;
	if(mm==m){
		ans=max(ans,anss);
		return;
	}
	if(g>n)return;
	if(anss!=-1){
		//cout<<(anss & a[g])<<" "<<anss<<" "<<a[g]<<endl;		
		long long int nn=(anss & a[g]);
		dfs(g+1,mm+1,nn);
	}
	else dfs(g+1,mm+1,a[g]);
	dfs(g+1,mm,anss);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if(m==n){
		long long int nn=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(nn!=-1)nn=(nn & a[i]);
			else nn=a[i];
		}
		cout<<nn;
		return 0;
	}
	if(m==1){
		long long int nn=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			nn=max(nn,a[i]);
		}
		cout<<nn;
		return 0;
	}
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(1,0,-1);
	cout<<ans;
	return 0;
} //RP++
