#include<bits/stdc++.h>
using namespace std;
string c_1,s_1,c_2,s_2;
int ce_1,ce_2,xl,che;
bool check;//如果在同一排为1 不在同一排为0 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c_1  >> s_1 >> c_2 >> s_2;
	//先判断是否在一节车厢
	if(c_1 == c_2) {
		cout << 1;
		che = 1;
	}
	else {
		cout << 0;
		che = 0;
	}
	//再判断是否在同一排
	if(che){
		if(s_1[0] == s_2[0] && s_1[1] == s_2[1]){
			check = 1;
			cout << 1;
		} else{
			check = 0;
			cout << 0;
		}
	}else cout << 0;
	
	//再判断是否在同一排的同一侧
	if(che){
		if(check == 0) cout << 0;
		else{
			if(s_1[2] == 'A' || s_1[2] == 'B' || s_1[2] == 'C') ce_1 = 1;//在过道左侧
			else ce_1 = 2;//在过道右侧 
			if(s_2[2] == 'A' || s_2[2] == 'B' || s_2[2] == 'C') ce_2 = 1;//在过道左侧
			else ce_2 = 2;//在过道右侧 
			if(ce_1 == ce_2) {
				xl = 1;//记录一下在同一侧 
				cout << 1;
			}
			else {
				xl = 0;
				cout << 0;
			}
		} 
	}
	else cout << 0;
	
	//最后判断是否相邻 
	if(xl && check){
		if(s_1[2] == 'A' && s_2[2] == 'B'||s_1[2] == 'B' && s_2[2] == 'C' 
		|| s_1[2] == 'D' && s_2[2] == 'F' || s_2[2] == 'A' && s_1[2] == 'B'||s_2[2] == 'B' && s_1[2] == 'C' 
		|| s_2[2] == 'D' && s_1[2] == 'F' ) cout << 1;
		else cout << 0;
	}
	else cout << 0;
	return 0;
} 
