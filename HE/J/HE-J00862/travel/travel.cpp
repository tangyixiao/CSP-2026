#include<bits/stdc++.h>
using namespace std;

string c1,c2,s1,s2;

bool pa(string x,string y){
	int a,b;
	if(x[2] == 'A'||x[2] == 'B' || x[2] == 'C'){
		a = 1;
	}else{
		a = 2;
	}
	if(y[2] == 'A'||y[2] == 'B' || y[2] == 'C'){
		b = 1;
	}else{
		b = 2;
	}
	if(a == b){
		return true;
	}else{
		return false;
	}
}

bool xl(string x,string y){
	int a,b;
	if(x[2] == 'A'||x[2] == 'B' || x[2] == 'C'){
		a = 1;
	}else{
		a = 2;
	}
	if(y[2] == 'A'||y[2] == 'B' || y[2] == 'C'){
		b = 1;
	}else{
		b = 2;
	}
	if(a == b && a == 2) return true;
	else{
		if((x[2] == 'A' && y[2] == 'B') || (x[2] == 'B' && y[2] == 'A') || (x[2] == 'B' && y[2] == 'C') || (x[2] == 'C' && y[2] == 'B')){
			return true;
		}
	}
	return false;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
	if(s1[1]== s2[1] && s1[0] == s2[0]){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}
	if(pa(s1,s2)){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	if(xl(s1,s2)){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}
