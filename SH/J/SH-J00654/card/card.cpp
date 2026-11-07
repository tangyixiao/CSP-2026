#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[500009];
bool cnt[300009];
ll ans[300009];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	stack<int> st;
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof(cnt));
		
		for(int j=i;j<=n;j++){
			if(!cnt[a[j]]){
				st.push(a[j]);
				cnt[a[j]]=1;
			}else{
				while(st.top()!=a[j]){
					st.pop();
				}
				st.pop();
				st.push(a[j]);
			}
		}
		
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();  //10 3 3 1 2 1 3 2 3 1 2 1
		}
	}
	
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	
	return 0;
}
