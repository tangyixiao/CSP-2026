#include <bits/stdc++.h>//暴力 
using namespace std;
const long long M=2e5+5;
long long n,m;
long long tmp;
deque <long long> my; 
deque <long long> now;
bool vis[M];
long long pos[M]; 
long long f(long long num){
	if(n>500){
		long long l=0,r=now.size()-1;
		while(l<=r){
			long long mid=(l+r)/2;
			if(num==now[mid]){
				return mid;
			}
			else if(now[mid]<num){
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
	}else{
		for(long long i=0;i<(long long)now.size();i++){
			if(now[i]==num){
				return i;
			}
		}
	}
	return -1;
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>tmp;
		my.push_back(tmp);
	}
	for(long long i=1;i<=n;i++){//遍历游戏局数 
		deque <long long> ow;//弃掉的牌 
		while(!my.empty()){//每一轮 
			long long mine=my.front();
			my.pop_front();
			now.push_back(mine);
			if(now.size()!=1&&mine==now.front()){
				for(long long i=0;i<(long long)now.size()-1;i++){
					ow.push_back(now[i]);
				}
				now.clear();
				now.push_back(mine);			
			}
		}
		my=ow;
		cout<<endl<<endl;
		for(long long i=0;i<now.size();i++){
			cout<<now[i]<<" ";
		}
		cout<<endl;
		for(long long i=0;i<my.size();i++){
			cout<<my[i]<<" ";
		} 
//		for(long long j=1;j<=m;j++){
//			if(f(j)!=-1&&vis[j]==0){
//				pos[j]=i;
//				vis[j]=1;
//				cout<<"i:" <<i<<" "<<j<<" "<<pos[j]<<": "<<endl;
//				for(long long i=0;i<now.size();i++){
//					cout<<now[i]<<" ";
//				} 
//			} 
//		}
	}
//	for(long long i=1;i<=m;i++){
//		cout<<pos[i]<<" ";
//	}
	return 0;
}
/*
4 3
1 2 1 3
*/
/*
题目样例没过…………样例解释没看懂 
*/
