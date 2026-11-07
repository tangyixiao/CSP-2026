#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const int maxn=5e5+5;
int n,m;
ll ans[maxn];
int a[maxn];
int b[maxn];
stack<int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		memset(b,0,sizeof(b));
		while(!st.empty()){
			st.pop();
		}
		for(int j=i;j<=n;++j){
			if(!b[a[j]]){
				st.push(j);
				b[a[j]]++;
				continue;
			}
			while(a[st.top()]!=a[j]){
				b[st.top()]--;
				st.pop();
			}
		}
		while(!st.empty()){
			ans[a[st.top()]]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}