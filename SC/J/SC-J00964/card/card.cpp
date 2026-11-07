#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
typedef long long ll;
const int mx=5e5+10;
int n,m,a[mx],s[mx];
bool vis[mx];
stack<int>p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(vis[a[i]]){
				while(!(p.top()==a[i])){
					vis[p.top()]=0;
					p.pop();
				}
			}
			p.push(a[i]);
			vis[a[i]]=1;
		}
		for(int k=1;k<=m;k++){
			if(vis[k])s[k]++;
			vis[k]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<s[i]<<" ";
	return 0;
} 