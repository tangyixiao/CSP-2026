#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],sum[300005];
stack<int>st;
bool fl[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(fl,0,sizeof fl);
		for(int j=i;j<=n;j++){
			if(fl[a[j]]==1){
				while(!st.empty()&&st.top()!=a[j]){
					fl[st.top()]=0; 
					st.pop();
				}
			}else{
				st.push(a[j]);
				fl[a[j]]=1;
			}
		} 
		while(!st.empty()){
			sum[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<sum[i]<<" ";
	return 0; 
} 