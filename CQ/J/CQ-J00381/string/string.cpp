#include<cstdio>
#include<algorithm>
#include<deque>
#include<utility>
long long n,ans,x;
char ch;
std::deque<std::pair<long long,char>>dq;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld %c",&x,&ch);
		dq.emplace_back(x,ch);
	}
	while(dq.size()>1){
		if(dq.front().second==dq.back().second){
			if(dq.front().first==dq.back().first){
				dq.pop_front(),dq.pop_back();
			}
			else if(dq.front().first>dq.back().first){
				dq.front().first-=dq.back().first;
				dq.pop_back();
			}
			else{
				dq.back().first-=dq.front().first;
				dq.pop_front();
			}
		}
		else if(dq.front().first>dq.back().first){
			ans+=dq.back().first;
			dq.front().first-=dq.back().first;
			dq.pop_back();
		}
		else{
			ans+=dq.front().first;
			dq.back().first-=dq.front().first;
			dq.pop_front();
		}
	}
	printf("%lld",ans);
} 
