#include<bits/stdc++.h>

using namespace std;

int n,m,a[100005],t;

int main (){
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	cin>> n >> m;
	for(int i=0;i<=n;i++){
		cin>>a[i];
		t=a[i];
		if(t==a[i+1]) t=a[i+1];
	}
	cout<< t;
	return 0;
} 
