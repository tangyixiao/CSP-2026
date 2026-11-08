#include<bits/stdc++.h>
using namespace std;
int a,b,c=0;
int k[300005];
bool bj[300005];
void dfs(int s,int t){
	if(s==b)c=max(c,t);
	else {
		for(int i=1;i<=a;i++){
			if(bj[i]==0){
				bj[i]=1;
				dfs(s+1,t&k[i]);
				bj[i]=0;
			}
	    }
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>k[i];
	}
	for(int i=1;i<=a;i++){
		bj[i]=1;
		dfs(1,k[i]);
		bj[i]=0;
	}
	cout<<c;
	return 0;
} 


