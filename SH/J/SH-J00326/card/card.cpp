#include<bits/stdc++.h>
#define int long long
using namespace std;
stack<int> st;
int a[500005],ans[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	int z=0;
	for(int x=n;x>=1;x--){
		for(int i=1;i<=x;i++){
			
			st.push(a[i]);
			if(z==st.top()){
				while(!st.empty()){
					cout<<st.top()<<endl;
					st.pop();
					z=st.top();
				}
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
}
