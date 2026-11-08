#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500100];
map<int,int> mp;
map<int,int>::iterator it;
stack<int> sk;
int ans[300100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) mp[j+1]=0;
		for(int j=i;j<n;j++){
			int k=a[j];
			if(mp[k]==1){
				while(sk.size()!=0&&sk.top()!=k){
					mp[sk.top()]=0;
					sk.pop();
				}
			}
			else{
				sk.push(k);
				mp[k]=1;
			}
		}
		while(!sk.empty()){
			ans[sk.top()-1]++;
			sk.pop();
		}
	}
	for(int i=0;i<m;i++) cout<<ans[i]<<" ";
	return 0;
}



