#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long ans[200005];
bool c(long long a,long long b){
	return a>b;
}

int main(){
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,c);
	long long c=a[0];
	for(int i=1;i<m;i++){
		c&=a[i];
	}
	cout<<c;
	return 0;
} 

