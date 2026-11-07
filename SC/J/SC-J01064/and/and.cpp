#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
int TMP[30];
multiset<int>st;
signed main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		st.insert(i);
	}
	for(int i=30;i>=0;i--){
		int num=0,tot=0;
		for(auto it:st){
			int tmp=it;
			if(a[tmp]&(1<<i)){
				num++;
			}
			else{
				TMP[tot++]=tmp;
			}
		}
		if(num>=m){
			ans+=(1<<i);
			for(int i=0;i<tot;i++){
				st.erase(TMP[i]);
			}
		}
		
	}
	cout<<ans;
	return 0;
}
