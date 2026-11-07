#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
stack<int> st;
bool is[300005],flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i])flag=0;
	}
	if(flag){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(!is[a[j]])ans[a[j]]++;
				is[a[j]]=1;
			}
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
	for(int i=1;i<=n;i++){
		memset(is,0,sizeof(is));
		for(int j=i;j<=n;j++){
			if(is[a[j]]){
				while(st.top()!=a[j]){
					int k=st.top();
					is[k]=0;
					st.pop();
				}
				st.pop();
			}
			is[a[j]]=1;
			st.push(a[j]);
		}
		while(!st.empty()){
			int k=st.top();
			ans[k]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 
