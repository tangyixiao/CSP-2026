#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[500005],v[300005],vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int> st;
	for(int z=1;z<=n;z++){
		for(int i=1;i<=m;i++){
			v[i]=0;
		}
		for(int i=z;i<=n;i++){
			if(v[a[i]]==0){
				st.push(a[i]);
				v[a[i]]=1;
			}
			else{
				for(int p=1;p;p++){
					if(st.top()==a[i]){
						break;
					}
					//cout<<st.top()<<"\n";
					v[st.top()]=0;
					st.pop();
				}
			}
		}
		while(!st.empty()){
			vis[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<vis[i]<<" ";
	return 0;
}
