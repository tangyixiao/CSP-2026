#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+5];
	string c[n+5];
	string s;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	} 
	s=!s;
	cout<<s;
	return 0;
} 
