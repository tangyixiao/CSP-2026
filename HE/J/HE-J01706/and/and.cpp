#include<bits/stdc++.h>
using namespace std;
int N=0;
int and(w,m){
	if(m==0){
		return N;
	}
	if(w>n){
		return N;
	}
	and(w+1,m-1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<and(n.m);
	return 0;
}
