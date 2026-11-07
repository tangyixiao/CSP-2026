#include<bits/stdc++.h>
#define N (int)5e5+5
using namespace std;
stack<int>st;
int szczcs[N],n,m,a[N];
bool sz[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=1;j<=m;j++)sz[j]=0;
		for(int j=i+1;j<=n;j++){
			if(sz[a[j]]){
				while(st.top()!=a[j] and st.size())sz[st.top()]=0,st.pop();
			}
			else{
				sz[a[j]]=1;
				st.push(a[j]);
			}
		}
		while(st.size()!=0){
			szczcs[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<szczcs[i]<<" ";
	cout<<endl;
	return 0;
}
