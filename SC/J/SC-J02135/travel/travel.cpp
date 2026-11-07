#include<bits/stdc++.h>
using namespace std;
string ci[5];
string cj[5];
char a;
char b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i = 1; i <= 2; i++){
		cin >> ci[i];
	}
	for(int i = 1; i <= 2; i++){
		cin >> cj[i];
	}
	if(ci[1] == cj[1]) cout << 1;//1
	else{
	    cout << "0000";
		return 0;	
	} 
	//2
	int s = 0;
	for(int i = 0; i <= 2; i++){
		if(ci[2][i] == cj[2][i]) s++;
		
	}
	if(s==2) cout << 1;
	else{
	    cout << "000";
		return 0;	
	} 
	
	a = ci[2][2];
	b = cj[2][2];
	if((a<='C')&&(b >= 'D')){ cout << "00"; return 0;}
	else if((b<='C')&&(a >= 'D')){ cout << "00"; return 0;}
	else{
		cout << 1;
	}
	
	int as = int(a);
	int bs = int(b);
	int ss = abs(as-bs);
	cout << as << ' ' << bs << ' ' << ss <<endl;
	if(ss) cout << 1;//4
	else cout << 0;
	
	
	return 0;
}