#include<bits/stdc++.h>
using namespace std;
struct node{
	int n,k;
}le,ri;
int n,f1,f2,m;
long long ans;
char f22;
deque<node>dp;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&f1,&f22);
		f2=f22-'a'+1;
		dp.push_back({f1,f2});
	}
	while(!dp.empty()){
		le=dp.front();
		dp.pop_front();
		if(dp.empty())break;
		ri=dp.back();
		dp.pop_back();
		m=min(le.n,ri.n);
		if(le.k!=ri.k)ans+=m;
		if(le.n>m){
			le.n-=m;
			dp.push_front(le);
		}
		if(ri.n>m){
			ri.n-=m;
			dp.push_back(ri);
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
