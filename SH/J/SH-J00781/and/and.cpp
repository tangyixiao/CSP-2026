#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+5;
vector<int>bts[50];
int n,m;
int a[maxn];bool vis[maxn];
vector<int>cur;
vector<int>tmp;
int uni_num(int x){
	int res=0;
	for(int i=1;i<=n;i++)vis[i]=0;
	for(int i=0;i<bts[x].size();i++)vis[bts[x][i]]=1;
	for(int i=0;i<cur.size();i++){
		if(vis[cur[i]])res++;
	}return res;
}
void update(int x){
	while(!tmp.empty())tmp.pop_back();
	for(int i=1;i<=n;i++)vis[i]=0;
	for(int i=0;i<bts[x].size();i++)vis[bts[x][i]]=1;
	for(int i=0;i<cur.size();i++){
		if(vis[cur[i]])tmp.push_back(cur[i]);
	}while(!cur.empty())cur.pop_back();
	for(int i=0;i<tmp.size();i++){
		cur.push_back(tmp[i]);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if(a[i]&(1ll<<j)){
				bts[j].push_back(i);
			}
		}cur.push_back(i);
	}
//	for(int i=0;i<=30;i++){
//		for(int j=0;j<bts[i].size();j++){
//			cout<<bts[i][j]<<' ';
//		}cout<<endl;
//	}
	for(int i=30;i>=0;i--){
		if(uni_num(i)>=m){
		//	cout<<"||"<<i<<endl;
			ans+=(1ll<<i);
			update(i);
		}//for(int j=0;j<cur.size();j++)cout<<cur[j]<<' ';
	//	cout<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
