#include<bits/stdc++.h>
using namespace std;
const int maxn=500005;
#define ll long long
int n,m,mat[maxn],ans[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>mat[i];
	for(int i=1;i<=n;i++){
		stack<int> st;	bool ton[maxn]={};
		for(int j=i;j<=n;j++){
			if(ton[mat[j]]==0){
				st.push(mat[j]);
				ton[mat[j]]=1;
			} 
			else{
				while(ton[mat[j]]){
					int x=st.top(); st.pop();
					ton[x]=0;
				}
				st.push(mat[j]);
				ton[mat[j]]=1;
			}
		}
		for(int i=1;i<=m;i++) 
			if(ton[i]) ans[i]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
