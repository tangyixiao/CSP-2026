#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");
	
	int n,m;
	cin>>n>>m;
	int a[11100];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int f=a[n];
	for(int i=n;i>=m;i--){
		f=f&a[i];
	}
	cout<<f<<endl;
	return 0;
}
