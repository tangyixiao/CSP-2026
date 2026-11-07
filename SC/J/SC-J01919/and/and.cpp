#include<bits/stdc++.h>
using namespace std;

const int NM = 2e5;
int A[NM+4],B[30+2];
int n,m,len,ans;
set<int> in[32+4];
void get(int x){
	int i = 0,px = x;
	while(x > 0){
		if(x&1) B[i]++,in[i].insert(px);
		i++,x >>= 1;
	}
	len = max(len,i);
}
//in[j]能在in[i]中找到相对应的值 
//10*
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>A[i],get(A[i]);
//	for(int i = 0;i <= len;i++) cout<<B[i]<<' ';
//	cout<<'\n';
	int lp = -1;
	for(int i = len;i >= 0;i--){
		if(B[i] >= m){
			if(lp == -1){
				lp = i,ans += (1<<i);
				continue;
			}
			for(const int &a : in[lp]){
				if(in[i].count(a)) in[len].insert(a);
			}
			if(in[len].size() >= m) ans += (1<<i),in[lp] = in[len];
			in[len].clear();
		}
	}
	cout<<ans;
	return 0;
}
