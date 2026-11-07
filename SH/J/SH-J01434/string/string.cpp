#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	
	freopen("w","string.out",stdout);
    int n,d = 0,num = 0;
    string x,y;
    cin >> n;
    string a;
    for(int i = 0;i < n;i++){
    	cin >> x[i] >> y[i];
	}
	for(int j = 0;j < n;j++){
	
		for(int i = 0;i < x[j];i++){
    		a[num] = y[i];
    		num += 1;}
    }
	string b;
	for(int i = num;i >= 0;i--){
		b[num - i] = a[i];
	}
	for(int i = 0;i < num;i++){
		if(a[i] != b[i]){
			d += 1;
		}
	}
	d /= 2;
	cout << d;
	return 0;
}
