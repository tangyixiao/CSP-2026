#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005],s[300005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> st;
		int t[300005]={0};
		for(int j=i;j<=n;j++){
			if(t[a[j]]==1){
				t[a[j]]=1;
				while(!st.empty()){
					if(st.top()==a[j]) break;
					t[st.top()]--;
					st.pop();
				}
			}
			else{
				t[a[j]]++;
				st.push(a[j]);	
			}
		}
		while(!st.empty()){
			s[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
}
