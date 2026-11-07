#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500010],cnt[500010],ans[500010];
stack<long long >q;
struct edge{
	long long id,num;
}b[500010];
set<long long>se[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	cin>>a[i];
	b[i].id=i;
	b[i].num=a[i];
	}
	if(n<=5000){
	
		for(int i=1;i<=n;i++){
			memset(cnt,0,sizeof cnt);
			for(int j=i;j<=n;j++){
				
				if(cnt[a[j]] ==1){
					while(q.top()!=a[j]){
						cnt[q.top()]--;
						q.pop();
					}
					cnt[a[j]]=1;
				}else{
					q.push(a[j]);
					cnt[a[j]] ++;
				}
			}
			while(!q.empty()){
				ans[q.top()]++;
				q.pop();
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(i<n){
			if(b[i+1].num==b[i].num){
				b[i].num=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		if(b[i].num!=0){
			ans[b[i].num ]+=b[i].id;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	
	fclose(stdin);
	fclose(stdout); 
	
	return 0;
}
