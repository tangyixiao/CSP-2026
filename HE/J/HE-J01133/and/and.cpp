#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+1;
int a[N],ans;
vector<int> b,b1;
long long n,m;
int c(int m1,int l){
	if (m1==1) return a[l];
	for (int i=l+1;i<n;i++){
		return c(m1-1,i)&a[i];
	}
}
int main(){
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		ans=max(ans,c(m,i));
	}
	cout<<ans;
	return 0;
}
