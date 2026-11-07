#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],w;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	std::cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	w=a[n-1];
	for(long long i=n-2;i>n-1-m;i--){
		w&=a[i];
	}
	std::cout<<w;
	return 0;
} 

