#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+10;
int a[N],ans[N],ret[N],st[N];
vector<int>p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(ret,-1,sizeof ret);
    for(int i=1;i<=n;i++){
      if(ret[a[i]]!=-1){
      	st[ret[a[i]]]=i;}
      	ret[a[i]]=i;
	  
	}
	for(int i=1;i<=n;i++){
		p.clear();
		int idx=i;
		while(idx<=n){
			while(st[idx]!=0){
				idx=st[idx];
			//	cout<<idx<<" ";
			}
			p.push_back(a[idx]);
			idx++;
			//cout<<idx<<" ";
		}
		//cout<<"\n";
		for(int j=0;j<p.size();j++) {
		ans[p[j]]++;}
		
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
