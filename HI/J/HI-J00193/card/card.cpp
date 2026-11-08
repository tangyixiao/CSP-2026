#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int a[200005];
bool bb[300005],cc[300005];
int main(){
	freopen("card.in","r",stdin);	
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		stack<int> sta;
		for(int j=i;j<=n;j++){
			
			if(!bb[a[j]]){
				sta.push(a[j]);
				bb[a[j]]=1;
			} 
			else{
				stack<int> sss;
				sta=sss;
				sta.push(a[j]);
				bb[a[j]]=0;
				for(int z=1;z<=200005;z++) bb[z]=0;
			}
		}
		while(!sta.empty()){
			mp[sta.top()]++;
			//cout<<sta.top()<<' ';
			sta.pop();
		}
		//cout<<endl;
		for(int z=1;z<=200005;z++) bb[z]=0;
	}
	for(auto x:mp) cout<<x.second<<' ';
	return 0;
}
/*
10 3
2 3 1 2 1 3 2 3 1 2 1 
	10 3
	2 3 1 2 1 3 2 3 1 2 1
*/
