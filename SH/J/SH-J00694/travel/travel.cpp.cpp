#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a == c){
		cerr << "1" << " ";
	}
	else{
		cerr << "0" << " " << "0" << " " << "0" << " " << "0";
		return 0;
	}
	if(b[1] == d[1] && b[0] == d[0]){
		cerr << "1" << " ";
	}
	else{
		cerr << "0" << " " << "0" << " " << "0";
		return 0;
	}
	if(b[2] == 'C' && d[2] == 'D' || b[2] == 'D' && b[2] == 'C'){
		cerr << "0" << " " << "0";
		return 0;
	}
	else{
		cerr << "1" << " ";
	}
	if(b[2] == 'A' && d[2] == 'B' || b[2] == 'B' && b[2] == 'A' || b[2] == 'B' && d[2] == 'C' || b[2] == 'C' && b[2] == 'B' || b[2] == 'D' && d[2] == 'E' || b[2] == 'E' && b[2] == 'D'){
		cerr << "1";
	}
	else{
		cerr << "0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
