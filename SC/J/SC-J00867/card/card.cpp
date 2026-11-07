#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int N=5e5+10;
int n,m,a[N],cnt[N],ans,f;
vector<int> v;
int _find(int x){
	int cnt=0;
	for(int i:v){
		if(i==x)return cnt;
		cnt++;
	}
	return -1;
}
void solve_bl(){
	for(int i=1;i<=n;i++){
		v=vector<int>();
		if(0){}
		for(int j=i;j<=n;j++){
			int t=_find(a[j]);
			//cout<<"hi";
			if(t!=-1){
				for(auto i=v.end();i>=v.begin();i--){
					v.pop_back();
					if(*i==a[t])break;
				}
				v.push_back(a[j]);
			}else{
				v.push_back(a[j]);
			}
		}
		for(int j=1;j<=m;j++)if(_find(j)!=-1)cnt[j]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
}
void solve_dandiao(){
	for(int i=1;i<=n;i++){
		v=vector<int>();
		for(int j=i;j<=n;j++){
			int t=_find(a[j]);
			if(t==-1)v.push_back(a[j]);
		}
		for(int j=1;j<=m;j++)if(_find(j)!=-1)cnt[j]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]<a[i-1])f=1;
	}
	if(f==0)solve_dandiao();
	else if(n<=500&&m<=200)solve_bl();
	return 0;
}