#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m,ans;
vector<int>a;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}for(int num=29;num>=0;num--){
		int mask=(1<<num);
		vector<int> b;
		for(int i : a){
			if(i&mask){
			    b.push_back(i);
			}
		}if((int)b.size()>=m){
			a=b;
			ans|=mask;
		}
	}cout<<ans;
	return 0;
}