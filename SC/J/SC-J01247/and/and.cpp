#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return 0;
}