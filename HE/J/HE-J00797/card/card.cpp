#include <unordered_set>
#include <deque>
#include <cstdio>
using namespace std;
int n,m,a[300005],cnt[300005];
deque<int> q;
unordered_set<int> usd;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0,q;i<n;++i)
		scanf("%d",&a[i]);
	for(int i=n-1;i>=0;--i){
		if(usd.find(a[i])==usd.end())
			usd.emplace(a[i]),q.emplace_front(a[i]);
		else while(q.front()!=a[i])
			usd.erase(a[i]),q.pop_front();
		for(int i:usd)++cnt[i];
	}
	for(int i=1;i<=m;i++)	
		printf("%d ",cnt[i]);
	return 0;
} 
