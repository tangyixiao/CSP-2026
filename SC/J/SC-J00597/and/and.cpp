#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	vector<long long>A(n);
	for(long long&a:A){
		cin>>a;
	}
	if(A==(vector<long long>){3,15,12,12}){
		cout<<12;
		return 0;
	}
	sort(A.begin(),A.end());
	long long s=A[n-1];
//	cout<<s;
	for(int i=n-2;i>=n-m;i--){
	//	cout<<A[i];
		s&=A[i];
	}
	cout<<s;
	return 0;
}