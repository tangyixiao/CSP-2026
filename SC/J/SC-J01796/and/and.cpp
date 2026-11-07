#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN];
int b[MAXN][32],cnt[32];
bool ok[MAXN];
int ans;
vector<int> vec;
void dfs(vector<int> vec,int xuyao,int ceng){
	if(ceng<0)return;
	vector<int> feiqi;
	vector<int> xuanzhong;
	for(auto id:vec){
		if(b[id][ceng]){
			xuanzhong.push_back(id);
		}else{
			feiqi.push_back(id);
		}
	}
	if(xuyao>xuanzhong.size()){
		for(auto i:xuanzhong)ans&=a[i];
		dfs(feiqi,xuyao-xuanzhong.size(),ceng--);
	}else if(xuyao==xuanzhong.size()){
		for(auto i:xuanzhong)ans&=a[i];
	}else{
		dfs(xuanzhong,xuyao,ceng--);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);cout.tie(nullptr);
	int n,m;
	cin>>n>>m;
	int maxn=0;
	vec.reserve(n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vec.push_back(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;(1<<j)<=a[i];j++){
			b[i][j]=(1<<j)&a[i];
			if(b[i][j])maxn=max(maxn,j);
			cnt[j]++;
		}
	}
	ans=(1LL<<(maxn+1))-1;
	vector<int> next,maybe,choose;
	next.reserve(n);
	maybe.reserve(n);
	choose.reserve(n);
	for(int j=maxn;j>=0;j--){
		if(cnt[j]<m)continue;
		next.clear();
		maybe.clear();
		choose.clear();
		for(auto a:vec){
			if(b[a][j]){
				choose.push_back(a);
			}else{
				maybe.push_back(a);
			}
		}
//		cout<<"CHOOSE:";
//		for(auto i:choose){
//			cout<<a[i]<<" ";
//		}
//		cout<<"\nMAYBE:";
//		for(auto i:maybe){
//			cout<<a[i]<<" ";
//		}
//		cout<<"\n";
		if(choose.size()<=m){
			for(auto i:choose)ans&=a[i];
		}
		if(choose.size()==m)break;
		if(choose.size()<m){
			m-=choose.size();
			for(auto a:maybe)next.push_back(a);
		}else{
			for(auto a:choose)next.push_back(a);
		}
		swap(vec,next);	
	}
	cout<<ans;
	return 0;
}