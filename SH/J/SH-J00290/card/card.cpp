#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],inq[300005],ans[300005];
//int b[300005],cnt[300005],ex[300005];
stack<int>s;
deque<int>q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
//	for(int i=n;i>=1;i--){
//		q.push(a[i]);
//		if(!ex[a[i]])ex[a[i]]=i;
//		if(b[a[i]]){
//			q.pop();
//			while(q.size()&&q.top()!=a[i]){
//				b[q.top()]=0;
//				cnt[q.top()]=i;
//				q.pop();
//			}
//		}
//		b[a[i]]=1;
//	}
//	for(int i=1;i<=m;i++)cout<<ex[i]-cnt[i]<<" ";
	for(int i=1;i<=n;i++){
		memset(inq,0,sizeof(inq));
		while(q.size())q.pop_back();
		for(int j=1;j<=n;j++){
			q.push_back(j);
			if(inq[a[j]]){
				while(q.front()!=j){
					inq[a[q.front()]]=0;
					q.pop_front();
				}
			}
			inq[a[j]]=1;
		}
		for(int j=1;j<=m;j++)if(inq[j])ans[j]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
}
