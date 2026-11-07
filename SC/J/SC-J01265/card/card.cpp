#include <bits/stdc++.h>
using namespace std;
int n,m;
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	vector<int> a(n+1,0);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	vector<int> ans(m+1,0);
	for(int i=1;i<=n;i++){
		vector<int> cnt(m+1,0);
		for(int j=i;j<=n;j++){
			while(cnt[a[j]]){
				cnt[s.top()]--;
				s.pop();
			}
			cnt[a[j]]++;
			s.push(a[j]);
		}
		while(s.size()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}