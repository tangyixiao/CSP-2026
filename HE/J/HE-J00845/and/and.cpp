#include<iostream>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	const int N=200002;
	int a[N];
	int n,m;
	cin>>n>>m;
	for(int f=0;f<n;++f){
		cin>>a[f];
	}
	cout<<a[n-1];
}
