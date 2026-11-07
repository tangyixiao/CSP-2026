#include<bits/stdc++.h>
using namespace std;
const long long N=2e5;
long long a,s,d,f,A[N],ans;
long long mx(long long q,long long w){
	if(q<=w){
		return w;
	}
	return q;
}
void dfs(long long an,long long gs,long long dj){
	if (an<=ans){
		return ;
	}
	if(gs>s){
		ans=mx(ans,an);
		return;
	}
	if(dj>a){
		return;
	}
	for(long long i=dj;i<=a;i++){
		dfs(((an)&(A[i])),gs+1,i+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>s;
	for(long long i=1;i<=a;i++){
		cin>>A[i];
	}
	for(long long i=1;i<=a;i++){
		dfs(A[i],1,i);
	}
	cout<<ans;
	return 0;
}