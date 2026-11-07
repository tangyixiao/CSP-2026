#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],cn[300005],cnt[300005];
stack<long long> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cn[a[j]]++;
			if(cn[a[j]]>1){
				while(!st.empty()&&st.top()!=a[j]){
					cn[st.top()]--;
					st.pop();
				}
				cn[a[j]]--;
			}else{
				st.push(a[j]);
			}
		}
		for(int j=1;j<=m;j++){
			cnt[j]+=cn[j];
			cn[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
