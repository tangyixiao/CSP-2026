#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,m,a[200005],cheng[45],ans;
string aaa[200005];
void init(){
	cheng[0]=1;
	for(int i=1;i<=34;i++){
		cheng[i]=cheng[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		ll now=a[i];
		while(now!=0){
			aaa[i]+=char(now%2+'0');
			now/=2;
		}
	}
}
void g(vector<int> id,int now){
	vector<int> iii[45];
	for(int i=0;i<id.size();i++){
		for(int j=0;j<aaa[id[i]].size();j++){
			if(aaa[id[i]][j]=='1'){
				iii[j].push_back(id[i]);
			}
		} 
	}
	for(int i=now-1;i>=0;i--){
		if(iii[i].size()>=m){
			ans+=cheng[i];
			g(iii[i],i);
			return;
		}
	}
}
vector<int> wjy;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
		wjy.push_back(i);
	}
	init();
	g(wjy,35);
	cout <<ans;
	return 0;
} 
