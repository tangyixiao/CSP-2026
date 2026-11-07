#include<bits/stdc++.h>
using namespace std;
int qy(int x){
	while(x==0){
		return x%2;
		x/=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m,ans=0;cin>>n>>m;
	vector<int>A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	sort(A.begin(),A.end());
	int a=n-2;
	ans=qy(A[n-1]);
	for(int i=1;i<m;i++){
		ans=ans&qy(A[a]);
		a--;
	}
	cout<<ans;
	return 0;
}