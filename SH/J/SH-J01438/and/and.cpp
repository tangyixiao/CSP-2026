#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n=0,m=0;
	cin>>n>>m;
	long long x[200005]={};
	for (int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n,cmp);
	cout<<x[m-1];
	
	
	
	return 0;
}
