#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

int const N=200005;
long long num[N];
int n,m;

bool used[N];


void dfs(int step,long long now){
	if(step==m) {
		ans=max(ans,now);
		return;
	}
	for(int i=1;i<n;i++){
		if(used[i]) continue;
		used[i]=true;
		if(step==0) dfs(step+1,num[i]);
		else dfs(step+1,now&&num[i]);
		used[i]=false;
	}
	
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	
	cin>>n>>m;
	long long ans=0;
	for(int i=0;i<n;i++){
		cin>>num[i];
		ans=max(ans,num[i]);
	}
	//dfs(0,0);
	cout<<ans;
	
	return 0;
} 