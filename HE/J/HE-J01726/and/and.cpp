#include<iostream>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,x=0;
	int a[200001];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	for(int i=1;i<=n-m;i++){
		if(i&i+1>x){
			x=i&i+1;
		}
	}
	cout<<x;
	return 0;
} 
