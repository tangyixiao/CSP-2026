#include<bits/stdc++.h>
using namespace std;
long long a[3000000]; 
int main(){
	//freopen("andin","r",stdin);
	//freopen("andout","w",stdout);
	int n,s=0;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		s=a[i];
	}
	cout<<s;
} 
