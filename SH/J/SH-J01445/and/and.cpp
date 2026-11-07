#include<bits/stdc++.h> 
using namespace std;
int main(){
	long long a[200005];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	long long ans;
	if(n%2!=0) n+=1;
	for(int i=0;i<n/2;i++) ans=a[i];
	cout<<ans;
	return 0;
}
