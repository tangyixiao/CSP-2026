#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,n-1);
	cout<<a[2];
	return 0;
}