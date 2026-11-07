//card
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,pos;
int a[N],ans[N];
stack<int> st,st1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		for(int j=1;j<i;++j){
			if(a[j]==a[i]){
				pos=j;
				break;
			}
		}
		if(pos!=0){
			for(int j=pos;j<=i-1;++j){
				st.pop();
			}
			st.push(a[i]);
		}else{
			st.push(a[i]);
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
