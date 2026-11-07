#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2)cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	 
	
	
	int sp1 = 0;
	int sp2 = 0;
	int ss1 = 0;
	int ss2 = 0;
	
	ss1 += (s1[0] - '0') *10;
	ss1 += s1[1] - '0';
	
	ss2 += (s2[0] - '0') *10;
	ss2 += s2[1] - '0';
	
	bool ssp;
	if(ss2 == ss1){
		cout << 1;
		ssp = 1;
	} 
	else{
		cout << "000";
		return 0; 
		ssp = 0;
	} 
	
	if((s1[2] == 'F' || s1[2] == 'D')) sp1 = 1;
	if((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')) sp1 = 0;
	if((s2[2] == 'F' || s2[2] == 'D')) sp2 = 1;
	if((s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) sp2 = 0;
	
	if(sp1 == sp2  && ssp){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	
	if(s1[2] <= 'D')sp1 = s1[2] - 'A';
	else sp1 = 4;
	if(s2[2] <= 'D')sp2 = s2[2] - 'A';
	else sp2 = 4;
	
	if((sp1-sp2 == 1 || sp1-sp2 == -1) && ss1 == ss2) cout << 1;
	else cout << 0;
	return 0;
} 
