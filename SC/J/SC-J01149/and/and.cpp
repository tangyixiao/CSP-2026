#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		int c=a[i]&a[i+1];
		if(c>mx){
			mx=c;
		}
	}
	
	cout<<mx<<endl;
	return 0;
} 