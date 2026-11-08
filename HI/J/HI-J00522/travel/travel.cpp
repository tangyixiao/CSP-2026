#include <bits/stdc++.h> 
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r_c,r_s,x_c,x_s;
	cin >> r_c >> r_s >> x_c >> x_s;
	if (r_c == x_c)
	{
		cout << "1";
		if (r_s[0] == x_s[0] && r_s[1] == r_s[1])
		{
			cout << "1";
			
			if (r_s[2] == 'A' && x_s[2] == 'B' || r_s[2] == 'A' && x_s[2] == 'C'){
				cout << "1";
			}else if(r_s[2] == 'B' && x_s[2] == 'A' || r_s[2] == 'B' && x_s[2] == 'C'){
				cout << "1";
			}else if(r_s[2] == 'C' && x_s[2] == 'B' || r_s[2] == 'C' && x_s[2] == 'A'){
				cout << "1";
			}else if(r_s[2] == 'D' && x_s[2] == 'F'){
				cout << "1";
			}else if(r_s[2] == 'F' && x_s[2] == 'D'){
				cout << "1";
			}else{
				cout << "0"; 
			}
			
		}else
		{
			cout << "000";
		}
		
		if(r_s[1] == x_s[1] || r_s[1] + 1 == x_s[1] || r_s[1] - 1  == x_s[1] || (r_s[1] == '9' && x_s[1] == '0'))
		{
			if (r_s[2] == 'A' && (x_s[2] == 'B' || x_s[2] == 'A')){
				cout << "1";
			}else if(r_s[2] == 'B' && (x_s[2] == 'B' || x_s[2] == 'A' || x_s[2] == 'C')){
				cout << "1";
			}else if(r_s[2] == 'C' && (x_s[2] == 'B' || x_s[2] == 'C')){
				cout << "1";
			}else if(r_s[2] == 'D' && (x_s[2] == 'D' || x_s[2] == 'F')){
				cout << "1";
			}else if(r_s[2] == 'F' && (x_s[2] == 'D' || x_s[2] == 'F')){
				cout << "1";
			}else{
				cout << "0"; 
			}
		}
		
	}else
	{
		cout << "0000";
	}
	return 0;
}
