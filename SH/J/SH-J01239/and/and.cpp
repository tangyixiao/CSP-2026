#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue> 
#include<cstring>
int n,m,dist[20005];
std::queue<int>q;
int main(){
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout); 
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>dist[i]; 
	}
	std::sort(dist,dist+n);
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			q.push(dist[i]&dist[j]);
		}
	} 
	for(int k=1;k<m;k++){
		for(int i=0;i<n-k;i++){
			int x=q.front();
			for(int j=0;j<n;j++){
				q.push(dist[j]&x);	
			}
			q.pop();
		} 
	}
	while(!q.empty()){
		if(cnt>=q.front()){
			cnt=q.front();
		}
		q.pop();
	}
	std::cout<<cnt<<std::endl;
	return 0;
}
