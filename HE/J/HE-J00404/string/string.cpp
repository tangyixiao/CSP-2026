#include<bits/stdc++.h>
using namespace std;
int  a[20000000];
char b[20000000];
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);                                                                                               
	int n;
	cin >> n;
	string st,sr;
	long long siz = 1;
	for(int i = 1; i <= n; i ++){
		cin >> a[i] >> b[i];
		siz += a[i];
	}
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= a[i]; j++){
			st += b[i];
		}
	}
	for(int i = n ; i >= 1; i --){
		for(int j = 1; j <= a[i]; j ++){
			sr += b[i]; 
		}
	}
	long long kmz = 0;
	for(int i = 1; i <= siz/2; i ++){
		if(st[i] != sr[i]) kmz++;
	}
	cout << kmz;
	return 0;
	
	
} 

