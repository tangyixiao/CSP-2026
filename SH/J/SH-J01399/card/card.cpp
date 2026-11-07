#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[500005]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans[300005]={0};
	for(int i=1;i<=n;i++){
		int tmp[300005]={0};
		stack<int> st;
		for(int j=i;j<=n;j++){
			int x=a[j];
			if(tmp[x]!=0){
				while(1){
					if(st.top()==x){
						tmp[x]--;
						st.pop();
						break;
					}
					tmp[st.top()]--;
					st.pop();
				}
			}
			st.push(x);
			tmp[x]++;
		}
		for(int k=1;k<=300002;k++){
			ans[k]+=tmp[k];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
