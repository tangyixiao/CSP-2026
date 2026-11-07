#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],ans[300005];
stack<int> st;
bool b[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool canbee=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0) st.push(a[j]),b[a[j]]=1;
			else{
				canbee=1;
				while(st.top()!=a[j]){
					b[st.top()]=0;
					st.pop();
				}
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			b[st.top()]=0;
			st.pop();
		}
		if(canbee==0){
			for(int j=n;j>i;j--){
				ans[a[j]]+=(j-i);
			}
			break;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}