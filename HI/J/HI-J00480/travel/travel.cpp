#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string b1,b2;
string a1,a2;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << '1';
	else {
		cout << "0000";
		return 0;
	}
	//1
	
	int n1,n2;
	n1 = s1.length();
	n2 = s2.length();
	for(int i = 0;i < n1;i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z'){
			continue;
		}
		b1 += s1[i];
	}
	for(int i = 0;i < n2;i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z'){
			continue;
		}
		b2 += s2[i];
	}
	if(b1 == b2) cout << '1';
	else{
		cout << "000";
		return 0;
	} 
	//2
	
	for(int i = 0;i < n1;i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z'){
			a1 += s1[i];
		}
	}
	for(int i = 0;i < n2;i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z'){
			a2 += s2[i];
		}
	}
	if(a1[0] >= 'A' && a1[0] <= 'C' && a2[0] >= 'A' && a2[0] <= 'C'){
		cout << '1';
	}else if(a1[0] >= 'D' && a1[0] <= 'F' && a2[0] >= 'D' && a2[0] <= 'F'){
		cout << '1';
	}else {
		cout << "00";
		return 0;
	}
	//3
	
	if(a1[0] >= 'A' && a1[0] <= 'C' && a2[0] >= 'A' && a2[0] <= 'C'){
		if(a1[0] + 1 == a2[0] || a1[0] - 1 == a2[0]){
			cout << '1';
		}else cout << '0'; 
	}else if(a1[0] >= 'D' && a1[0] <= 'F' && a2[0] >= 'D' && a2[0] <= 'F'){
		if(a1[0] + 1 == a2[0] || a1[0] - 1 == a2[0]){
			cout << '1';
		}else cout << '0';
	}
	
	return 0;
}
