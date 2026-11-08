#include<bits/stdc++.h> 
using namespace std;
long long maxn=1,andr[200004]; 
int a,b;
void dfs(int x,int step,long long s) {
	if(step==0){
		if(s>=maxn)
			maxn=s;
			 
		return;
	}
	
	for(int i=x+1;i<=500;i++){
		dfs(i,step-1,(s&(andr[x])));
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>andr[i];
	}
	sort(andr,andr+a,greater<int>());
	for(int i=0;i<a;i++){
		dfs(i,b,268435455);
	}
	cout<<maxn;
	return 0;
} 
