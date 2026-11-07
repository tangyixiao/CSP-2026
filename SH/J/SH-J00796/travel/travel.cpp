#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,a,b;
	char x,y;
	cin >> n;
	cin >> a;
	cin >> x;
	cin >> m;
	cin >> b;
	cin >> y;
	if(n==m){
	}
	else{
		cout << "0000";
		return 0;
	}
	if(a==b){
	}
	else{
		cout << "1000";
		return 0;
	}
	if(x=='A' && y=='B'){
	}
	else if(x=='A' && y=='c'){
	}
	else if(x=='B' && y=='c'){
	}
	else if(x=='B' && y=='A'){
	}
	else if(x=='C' && y=='A'){
	}
	else if(x=='D' && y=='F'){
	}
	else if(x=='F' && y=='D'){
	}
	else{
		cout << "1100";
		return 0;
	}
	cout << "111";
	if(x=='A' && y=='C'){
		cout << "0";
		return 0;
	}
	else if(x=='C' && y=='A'){
		cout << "0";
		return 0;
	}
	else{
		cout << "1";
	}
	
	return 0;
} 
