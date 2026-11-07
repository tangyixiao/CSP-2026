#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
bool inst[300005];
int a[20000],ans[300005],lst[200005];
stack<int> st;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	if(n>5000){
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
			lst[a[i]]=max(lst[a[i]],i);
		}
		for(int i = 1; i <= m; i++){
			cout<<lst[i]<<' ';
		}
		return 0;
	}
	for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
	for(int i = 1; i <= n; i++){
		while(!st.empty()) st.pop();
		for(int j = 1; j <= m; j++) inst[j]=0;
		for(int j = i; j <= n; j++){
			if(inst[a[j]]){
				while(st.top()!=a[j]) {
					inst[st.top()]=0;
					st.pop();
				}
			}
			else{
				st.push(a[j]);
				inst[a[j]]=1;
			}
		}
		for(int i = 1; i <= m; i++) ans[i]+=inst[i];
	}
	for(int i = 1; i <= m; i++) cout<<ans[i]<<' ';
	return 0;
}