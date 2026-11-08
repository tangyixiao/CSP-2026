#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
int n,m;
int a[MAXN];
int ins[MAXN],ans[MAXN];
stack<pair<int,int>>st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=1;j<=n;j++){
		memset(ins,0,sizeof(ins));
		while(st.size())st.pop();
		for(int i=j;i<=n;i++){
			if(ins[a[i]]==0){
				ins[a[i]]=1;
				st.push({a[i],i});
			}else{
				while(st.size()){
					if(st.top().first==a[i]){
						st.pop();
						break;
					}else{
						ins[st.top().first]=0;
						st.pop();
					}
				}
				st.push({a[i],i});
			} 
		}
		while(st.size()){
			ans[st.top().first]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
