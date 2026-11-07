#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c = 0,d = 0;
	cin >> a >> b;
	int x[a+5];
	int n[b];
	for(int i = 1;i<=a;i++){
		cin >> x[i];
	}
	for(int i = 1;i<=b;i++){
		for(int j = 1;j<=a;j++){
			if(x[j] > c){
				c = x[j];
				d = j;
			}
		}
		n[i] = c;
		x[d] = 0;
		c = 0;
		d = 0;
	}
	cout << x[1] and x[2];
	return 0;
}