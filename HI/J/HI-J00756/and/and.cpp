#include <bits/stdc++.h>
using namespace std;
int n,m,num=1;
int main(){
	cin >> n >> m;
	int a[n+1];
	for(int i=0; i<=n-1; i++){
		cin >> a[i];
	}
	num=a[0];
	for(int i=1; i<=n; i++){
		if(a[i]>num){
			num=a[i];
		}
	}
	cout <<num;
	return 0;
}
