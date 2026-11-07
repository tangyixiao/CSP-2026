#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m,ans=(pow(2,31)-1);cin>>n>>m;
	vector<int> A,st(200005);
	set<int> tmp;
	for(int i=1;i<=n;i++){int num;cin>>num;A.push_back(num);}
	for(int i=30;i>=0;i--){
		if(!m)break;
		for(int j=0;j<int(A.size());j++){
			if(st[j])continue;
			if(A[j]&(1<<i)){tmp.insert(j);}
		}
		if(int(tmp.size())>m){
			for(int j=0;j<int(A.size());j++)if(!tmp.count(j)){st[j]=1;}
		}
		else{
			for(auto it:tmp){st[it]=1;ans=ans&A[it];m--;}
		}
		tmp.clear();
	}
	for(int i=0;i<int(A.size());i++){
		if(m&&!st[i]){ans&=A[i];m--;}
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/