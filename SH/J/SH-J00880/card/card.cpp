#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int f[300005];
map<int,int> mp;
stack<int> st;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5000){
		for(int i=1;i<=n;i++){
			for(int x=i;x<=n;x++){
				st.push(a[x]);
				mp[a[x]]++;
				if(mp[a[x]]==2){
					mp[a[x]]--;
					st.pop();
					while(st.top()!=a[x]){
						mp[st.top()]--;
						st.pop();
					}
				}
			}
			for(auto it:mp){
				if(it.second==1) f[it.first]++;
			}
			mp.clear();
		}
		for(int i=1;i<=m;i++) cout<<f[i]<<" ";
		cout<<endl;
	}
	else{
		for(int i=1;i<=n;i++) mp[a[i]]++;
		for(int i=1;i<=n;i++){
			if(mp.count(a[i])) f[a[i]]++;
			mp[a[i]]--;
			if(mp[a[i]]==0) mp.erase(a[i]);
		}
		for(int i=1;i<=m;i++) cout<<f[i]<<" ";
		cout<<endl;
	}
	return 0;
}
