#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	vector<int>A(n+1),M(m+1,0);
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	int be_=1;
	int k=1;
	qwer:
	vector<int>B(n+1,0),p(m+1,0);
	for(int i=be_;i<=n;i++){
		if(p[A[i]]==0){
			B[k]=(A[i]);
			p[A[i]]=k;
			k++;
		}
		else{
			k=p[A[i]]+1;
			B[k]=0;
		}	
	}
	for(int j=1;j<=k;j++){
		M[B[j]]++;
	}
	B.clear();
	p.clear();
	k=1;
	be_++;
	if(be_<=n){
		goto qwer;
	}
	for(int i=1;i<=m;i++){
		cout<<M[i]<<' ';
	}
	return 0;
}