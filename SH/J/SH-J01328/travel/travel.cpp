#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string tra1,sea1,tra2,sea2;
	cin >> tra1 >> sea1 >> tra2 >> sea2;
	if(tra1 == tra2) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	string ans1 = "";
	string ans2 = "";
	for(int i=0;i < sea1.size()-1;i++) ans1 += sea1[i];
	for(int i=0;i < sea2.size()-1;i++) ans2 += sea2[i];
	if(ans1 == ans2) cout << 1;
	else{
		cout << "000";
		return 0;
	}
	if((sea1[2] >= 'A' && sea1[2] <= 'C' && sea2[2] >= 'A' && sea2[2] <= 'C') || (sea1[2] >= 'D' && sea1[2] <= 'F' && sea2[2] >= 'D' && sea2[2] <= 'F')){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	if(sea1[2] == 'A'){
		if(sea2[2] == 'B') cout << 1;
		else cout << 0;
	}
	if(sea1[2] == 'B'){
		if(sea2[2] == 'C' || sea2[2] == 'A') cout << 1;
		else cout << 0;
	}
	if(sea1[2] == 'C'){
		if(sea2[2] == 'B') cout << 1;
		else cout << 0;
	}
	if(sea1[2] == 'D'){
		if(sea2[2] == 'F') cout << 1;
		else cout << 0;
	}
	if(sea1[2] == 'F'){
		if(sea2[2] == 'D') cout << 1;
		else cout << 0;
	}
	return 0;
} 
