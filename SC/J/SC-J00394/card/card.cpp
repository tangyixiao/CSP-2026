#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
const int inf=0x3f3f3f3f;
const int N=2e6+9;
int n,m;
int cards[500005];
int ton[500005];
int game[500005];
int g_len;
set<int> st;
void delt(int x){
	for(int i=g_len-1;game[i]!=x;i--,g_len--){
		st.erase(game[i]);
		game[i]=-1;
		
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>cards[i];
	}
	for(int _=1;_<=n;_++){
		g_len=0;
		st.clear();
		for(int i=_-1;i<n;i++){
			if(st.count(cards[i])){
				delt(cards[i]);
			}else{
				st.emplace(cards[i]);
				game[g_len++]=cards[i];
			} 
		}
		for(int i=0;i<g_len;i++){
			ton[game[i]]++;
			
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ton[i]<<" ";
	}
	return 0;
}