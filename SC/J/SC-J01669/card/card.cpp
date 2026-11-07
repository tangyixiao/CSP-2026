#include<bits/stdc++.h>
using namespace std;
int n,m,f[500005],ans[300005],v[300005];
  stack<int> st;
void goout(int t){
	while(!st.empty()){
		int s=st.top();
		st.pop();
		if(s==t) break;
		else v[s]=0;
	}

	
}
void clean(){
	while(!st.empty()){
		st.pop();
	}
}
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
cin>>n>>m;
for(int i=1;i<=n;i++) cin>>f[i];
for(int i=1;i<=n;i++){
   clean();
	for(int j=i;j<=n;j++){
		int x=f[j];
		if(v[x]==0){
			st.push(x);
			v[x]=1;
		}
		else{
			goout(x);
			st.push(x);
		}
		
	}
	for(int j=1;j<=m;j++){
		if(v[j]==1){
			v[j]=0;
			ans[j]++;
			
		}
	}
}
for(int i=1;i<=m;i++){
	cout<<ans[i]<<" ";
}
	return 0;
}  