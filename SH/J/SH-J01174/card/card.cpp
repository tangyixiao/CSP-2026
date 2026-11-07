#include<bits/stdc++.h>
using namespace std;
long long n,m,ans[500010],a[500010],t[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(t,0,sizeof t);
		stack<long long>st;
		for(int j=i;j<=n;j++){
			if(!t[a[j]]){ 
				t[a[j]]=1;
				st.push(a[j]);
			}
			else{
				while(st.top()!=a[j]){
					t[st.top()]=0;
					st.pop();
				}
			}
		}
		while(!st.empty()){
			int it=st.top();
			ans[it]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" "; 
	return 0;
}

