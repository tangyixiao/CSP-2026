#include<bits/stdc++.h>
using namespace std;
int a[200010];
priority_queue<int> q;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	int maa=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		maa=max(maa,a[i]);
	}
	int cnt=0; 
	while(maa>0){
		maa>>=1;
		cnt++;
	}
	int ma=0;
	for(int i=1;i<=cnt;i++){
		for(int j=1;j<=n;j++){
			if(a[j]<(1<<(i-1))){
				continue;
			}
			if((a[j]>>(i-1))&1==1){
				q.push(a[j]);
			}
		}
		int zmc=q.top();
		for(int j=1;j<=m;j++){
			zmc&=q.top();
			q.pop();
			if(q.empty()){
				zmc=0;
				break;
			}
		}
		ma=max(zmc,ma);
		while(!q.empty()){
			q.pop();
		}
	}
	printf("%d",ma);
	return 0;
}