#include<bits/stdc++.h>
using namespace std;
long long q,a,s,u[10000000];
map<int,int>qw;
deque<long long>y,n;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&q,&a);
	for(int i=1;i<=q;i++)cin>>s,n.push_back(s);
	for(int i=1;i<=q;i++){
		for(auto re:n){
			bool p=0;
			if(!y.empty()){
				for(auto o:y){
					if(o==re){
						p=1;
						break;
					}
				}
			}
			if(p){
				bool m=0;
				for(auto o:y){
					if(o==re)m=1;
					if(m)y.pop_front();
					else y.push_back(y.front()),y.pop_front();
				}
			}
			y.push_back(re);
		}
		for(auto o:y){
			qw[o]++;
		}
		y.clear(),n.pop_front();
	}
	for(auto o:qw){
		cout<<o.second<<' ';
	}
	return 0;
}