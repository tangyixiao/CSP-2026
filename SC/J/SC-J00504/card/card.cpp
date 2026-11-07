#include <iostream>
#include <cstdio>
#include <algorithm>

#include <stack>
using namespace std;

int a[500050]={0};
stack<int> st;
int vis[300030]={0};

int ans[300030]={0};

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int l=1;l<=m;l++){
			vis[l]=0;
		}
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(st.top()!=a[j]){
					vis[st.top()]=0;
					st.pop();
				}
			}
			else{
				vis[a[j]]=1;
				st.push(a[j]);
			}
		}
		
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	
	
	
	return 0;
	
	fclose(stdin);
	fclose(stdout);
}