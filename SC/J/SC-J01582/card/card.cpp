#include<iostream>
#include<stack>
#include<fstream>
#include<vector>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	unsigned int n=5e5,m=5e5;
	cin>>n>>m;
	unsigned int a[n],ans[m+1]={};
	for(unsigned int i=0;i<n;i++)
		cin>>a[i];
	for(unsigned int i=0;i<n;i++){
		vector<bool> vis(m,false);
		stack<unsigned int> stk;
		for(unsigned int j=i;j<n;j++){
			if(vis[a[j]])
				while(stk.top()!=a[j]){
					vis[stk.top()]=false;
					stk.pop();
				}
			else{
				vis[a[j]]=true;
				stk.push(a[j]);
			}
		}
		while(!stk.empty()){
			ans[stk.top()]++;
			stk.pop();
		}
	}
	for(unsigned int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
}