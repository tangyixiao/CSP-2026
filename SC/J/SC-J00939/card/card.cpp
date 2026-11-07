/*
不管了能有一分是一分 
*/ 
#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],ans[N];
vector<int> v;
int find(int d){
	int len=v.size();
	for(int i=0;i<len;i++){
		if(v[i]==d)return i;
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int d;cin>>d;
		if(find(d)!=-1){
			v.erase(v.begin()+find(d),v.end());
		}else {
			v.push_back(d);
		}
		int len=v.size();
		for(int i=0;i<len;i++){
			ans[v[i]]++;
		}
		
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	
}