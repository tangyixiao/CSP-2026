#include<bits/stdc++.h>
using namespace std;
int a[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){	
		stack<int> st;
		int a2[300005]={0};
		for(int j=i;j<=n;j++){
			if(a2[a[j]]==1){
				while(!st.empty()&&st.top()!=a[j]){
					int top=st.top();
					st.pop();
					a2[top]=0;
				}
			}
			else{
				st.push(a[j]);
				a2[a[j]]=1;
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=k;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

