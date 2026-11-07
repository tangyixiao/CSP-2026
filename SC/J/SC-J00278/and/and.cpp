#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
vector<int>t1,t2;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		t1.push_back(a[i]);
	}for(int i=29;i>=0;--i){
		int cnt=0;
		for(int v:t1)if((v>>i)&1)++cnt;
		if(cnt>=m){
			for(int v:t1)if((v>>i)&1)t2.push_back(v);
			swap(t1,t2);
			t2.clear();
		}
	}ans=2147483647;
	for(int i=0;i<m;++i){
		ans&=t1[i];
	}printf("%d\n",ans);
}