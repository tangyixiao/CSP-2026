#include<iostream>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=a[0];
	for(int i=1;i<n;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0
}