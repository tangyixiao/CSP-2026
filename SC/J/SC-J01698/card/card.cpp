#include<bits/stdc++.h>
using namespace std;
const int maxm=3e5+5;
int n,m,r,ans[maxm],ca[maxm];
bool nr[maxm];
deque<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	memset(nr,0,sizeof nr);
	memset(ans,0,sizeof ans);
	for(int i=0;i<n;i++)
		scanf("%d",&ca[i]);
	for(int t=0;t<n;t++){
		for(int i=0,c;i<n-t;i++){
			c=ca[i+t];
			if(nr[c])
				while(1){
					r=q.front();q.pop_front();nr[r]=0;
					if(r==c) break;
				}
			nr[c]=1;q.push_front(c);
		}
		while(!q.empty()){
			r=q.front();q.pop_front();nr[r]=0;
			ans[r]+=1;
		}
	}
	for(int i=1;i<=m;i++)
		printf("%d ",ans[i]);
	return 0;
}
//暴力模拟 点12/25 