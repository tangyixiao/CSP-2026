#include<bits/stdc++.h>
using namespace std;
int n,m;
auto find_ans(int cnt,vector<int> A,int ans){
	if(cnt==m){
		return ans; 
	}
	int a=0;
	for(int i=0,b;i<n;i++){
		if(A[i]==-1) continue;
		a=max(find_ans(cnt+1,A,ans&A[i]),a);
		cout<<cnt<<' '<<a<<'\n';
	}
	return 0; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ans=-1;
	vector<int> A(n);
	for(int i=0;i<n;i++) cin>>A[i];
	for(int i=0,a;i<m;i++){
		a=A[i];
		A[i]=-1;
		ans=max(find_ans(1,A,a),ans);
		A[i]=a;
	}
	cout<<ans;
	return 0;
}