#include<bits/stdc++.h>
using namespace std;
string a;
string b;
string n;
string m;
bool cmp(char z,char w){
	if(z >= 'A'&&z <= 'C'&&w >= 'A'&&w <= 'C'){
		return true;
	}else if(z >= 'D'&&z <= 'F'&&w >= 'D'&&w <= 'F'){
		return true;
	}else{
		return false;
	}
}
bool sit(char e, char f){
	if(e == 'C'&&f == 'D'){
		return false;
	}else if(e == 'D' && f == 'C'){
		return false;
	}
	if(e + 1 == f||e - 1 == f){
		return true;
	}
	return false;
}
int main(){
	int sum1 = 0,sum2 = 0;
	char x,y;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> n >> a >> m >> b;
	for(int i = 0; i < a.size(); i++){
		if(i <= 1){ 
			sum1 = sum1 * 10 + (a[i] - '0');
		}
		if(i == 2){
			x = a[i];
		}
	} 
	for(int i = 0; i < b.size(); i++){
		if(i <= 1){
			sum2 = sum2 * 10 + (b[i] - '0');
		}
		if(i == 2){
			y = b[i];
		}
	}
	if(n == m){
		cout << 1;
		if(sum1 == sum2){
			cout << 1;
			if(cmp(x,y)){
				cout << 1;
				if(sit(x,y)){
					cout << 1;
				}else{
					cout << 0;
				}
			}else{
				cout << "00";
			}
		}else{
			cout <<"000";
		}
	}else{
		cout << "0000"; 
	}
	return 0;
} 
