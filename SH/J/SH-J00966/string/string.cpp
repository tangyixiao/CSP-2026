#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin >> n;
	int m[222222];
	char a[222222];
	long long z = 0;
	for(int i = 1 ; i <= n ; i++){
		cin >> m[i] >> a[i];
		z += m[i];
	}
	long long num = 0;
	int t = 0,tt = 1,w = 0,ww = n; 
	for(int i = 1 ; i <= z/2 ; i++){
		if(a[tt] != a[ww]){
			t++;
			w++;
			num++;
		}
		if(a[tt] == a[ww]){
			t++;
			w++;
		}
		if(t >= m[tt]){
			tt++;
			t = 0;
		}
		if(w >= m[ww]){
			ww--;
			w = 0;
		}
	}
	cout << num;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
	
}
