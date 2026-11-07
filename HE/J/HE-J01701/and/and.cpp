#include <bits/stdc++.h>
using namespace std;
int h[100000],z=0;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	sort(h,h+n,greater<int>());
	for(int i=0;i<m;i++){
		z=h[i]&h[i+1];
	}
	cout<<z;
} 
