#include<bits/stdc++.h>;
using namespace std;
bool x(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m,a[200001],b;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+m,x);
	for(int j=0;j<m;j++){
		b=a[j]&&a[j+1];
	}
	cout<<b; 
	return 0;
}
