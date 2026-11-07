#include<bits/stdc++.h>
using namespace std;
int N=2e5;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int sum;
	for(int i=1;i>0;i++){
		sum++;
}
	int n,m,c;
	cin>>n>>m;
	int a[N],b[N];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>a[i+1]){
			a[i]=c;
			a[i]=a[i+1];
			a[i+1]=c;
		}
	}
	cout<<a[n-2];
	return 0;
}