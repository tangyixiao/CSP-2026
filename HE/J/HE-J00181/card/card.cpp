#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N];
int n,m;
int b[N];
vector<int> ans;
long long cnt[M];
int find(int x){
	int i=0;
	for(int it=0;it<ans.size();it++){
		int y=ans[it];
		if(y==x){
			return i;
		}
		i++;
	}
	return -1;
}
void solve(){
	cin>>n>>m;
	for(int q=1;q<=n;q++){
		cin>>a[q];
	}
	for(int q=1;q<=n;q++){
		ans.clear();
		int i=0;
		for(int w=q;w<=n;w++){
			b[++i]=a[w];
		}
		for(int w=1;w<=i;w++){
			int t=find(b[w]);
			if(t==-1){
				ans.push_back(b[w]);
			}else{
				 vector<int> c;
				 c.clear();
				 for(int e=0;e<t;e++){
				 	c.push_back(ans[e]);
				 }
				 ans=c;
				 ans.push_back(b[w]);
			}
		}
		for(int w=0;w<ans.size();w++){
			cnt[ans[w]]++;
		}
	}
	for(int q=1;q<=m;q++){
		cout<<cnt[q]<<" ";
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
	return 0;
}
