#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
	}
	else if(m==n){
		cout<<a[n];
	}
	else if(m==2){
		cout<<a[2];
	}
	else if(m==n-1){
		cout<<a[n-1];
	}
	else{
		cout<<a[m];
	}
	return 0;
} 