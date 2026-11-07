#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x;char s;
};
long long cnt,n;
deque<node>q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;char s;
		cin>>x>>s;q.push_back({x,s});
	}
	while(q.size()>1){
		if(q.front().s==q.back().s){
			if(q.front().x<=q.back().x)q.back().x-=q.front().x,q.pop_front();
			else q.front().x-=q.back().x,q.pop_back();
		}
		else{
			if(q.front().x<=q.back().x){
				cnt+=q.front().x;
				q.back().x-=q.front().x;
				q.pop_front();
			}
			else{
				cnt+=q.back().x;
				q.front().x-=q.back().x;
				q.pop_back();
			}
		}
	}
	cout<<cnt;
}
