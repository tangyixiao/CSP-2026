#include<bits/stdc++.h> 
using namespace std;
long long a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	map<long long,long long>mp,mk;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<long long>st;
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			if(mp[a[j]]){
				while(st.top()!=a[j])mp[st.top()]=0,st.pop();
				mp[st.top()]=0;
				st.pop();
				mp[a[j]]=0;
			}
			st.push(a[j]);
			mp[a[j]]=1;
		}
		while(!st.empty()){
			mk[st.top()]++;
			st.pop();
		}
		for(long long i=1;i<=m;i++)mp[i]=0;
	}
	for(long long i=1;i<=m;i++){
		cout<<mk[i]<<" ";
	}
	return 0;
} 