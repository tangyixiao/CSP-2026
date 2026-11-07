#include<bits/stdc++.h>
using namespace std;
int card[300010],a[500010];
bool flag[300010];
queue<int> q1,q2;
int find(int x){
	while(!q2.empty()){
		if(q2.front()==x) return q2.size();
		q2.pop();
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin >>n>>m;
	for(int i = 1;i<=n;i++){
		cin >>a[i];
	}
	if(m==1){
		cout <<n;
		return 0;
	}
	for(int i = 1;i<=n;i++){
		memset(flag,0,sizeof(flag));
		for(int j = i;j<=n;j++){
			if(!flag[a[j]]){
				card[a[j]]++;
				flag[a[j]] = 1;
			}
			
		}
	}
	for(int i = 1;i<=m;i++) cout <<card[i]<<" ";
}
