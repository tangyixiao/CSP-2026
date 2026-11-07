#include <deque>
#include <cstdio>
#include <utility>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b)) 
typedef long long lli;
lli n,a,rt,lt=0;
unsigned long long cnt=0;
deque<pair<char,lli> > q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		char c;
		scanf("%d %c",&a,&c);
		if(q.empty()||q.back().first!=c)
			q.emplace_back(c,a);
		else q.back().second+=a;
	}
	rt=q.size()-1;
	while(lt<rt){
		if(q[lt].first!=q[rt].first)
			cnt+=min(q[lt].second,q[rt].second);
		if(q[lt].second==q[rt].second)
			++lt,--rt;
		else if(q[lt].second>q[rt].second)
			q[lt].second-=q[rt--].second;
		else q[rt].second-=q[lt++].second;
	}
	printf("%llu",cnt);
	return 0;
} 
