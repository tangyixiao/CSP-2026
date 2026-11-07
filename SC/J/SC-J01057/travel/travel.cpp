#include<bits/stdc++.h>
using namespace std;
//免费打开检查一下
//int给为longlong一下 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;//车厢 
	string s1,s2;//座位 
	cin >> a >> s1 >> b >> s2;
	if(a==b){
		cout << "1";
	}
	else{
		cout << "0000";
		return 0;
	}
	if((s1[0]-'0')*10+s1[1]-'0' == (s2[0]-'0')*10+s2[1]-'0'){
		cout << "1";
	}
	else{
		cout << "000";
		return 0;
	}
	if(s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C'){
		if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'){
			cout << "1";
		}
		else{
			cout << "00";
			return 0; 
		}
	}
	else{
		if(s2[2] == 'D' || s2[2] == 'F' ){
			cout << "1";
		}
		else{
			cout << "00";
			return 0;
		}
	}
	if(s1[2] == 'A'){
		if(s2[2] == 'B'){
			cout << "1";
		}
		else{
			cout << "0";
			return 0; 
		}
	}
	else if(s1[2] == 'B'){
		if(s2[2] == 'A'||s2[2] == 'C'){
			cout << "1";
		}
		else{
			cout << "0";
			return 0; 
		}
	}
	else if(s1[2] == 'C'){
		if(s2[2] == 'B'){
			cout << "1";
		}
		else{
			cout << "0";
			return 0; 
		}
	}
	else if(s1[2] == 'D'){
		if(s2[2] == 'F'){
			cout << "1";
		}
		else{
			cout << "0";
			return 0; 
		}
	}
	else{
		if(s2[2] == 'D'){
			cout << "1";
		}
		else{
			cout << "0";
			return 0;
		}
	}
	return 0;
}
/*

02 03C 02 03A
1000

*/