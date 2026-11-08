#include<iostream>
using namespace std;


int main(){
//freopen("crystal.in", "r", stdin);
//freopen("crystal.out", "w", stdout);
	int a,k,d,d2;
	cin>>a;
	cin>>k;
	int q[a];
	for(int i;i <= a;i++){
		cin>>q[i];
		d = d+q[i];
	}
	d2 = (d+k)/a;
return 0;
}
