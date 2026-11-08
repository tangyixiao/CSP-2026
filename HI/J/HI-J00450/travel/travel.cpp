#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	char c1[8], s1[8], c2[8], s2[8];
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[0] != c2[0] || c1[1] != c2[1]){
		cout << "0000\n";
		return 0;
	}
	if(s1[0] == s2[0] && s1[1] == s2[1]){
		//ABC相邻 
		if(s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C'){
			if(s1[2] == 'D' || s2[2] == 'D'){
				cout << "1110\n";
				
			}
			if(s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2]){
				cout << "1111\n";
				return 0;
			}
			//隔了一人
			else{
				cout << "1110\n";
				return 0;
			} 
		}
			
		//DF相邻 
		if((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')){
			cout << "1111\n";
			return 0;
		} 
			
		//过道不同侧 
		if(s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'D' && s2[2] <= 'F'){
			cout << "1100\n";
			return 0;
		} 
		if(s2[2] >= 'A' && s2[2] <= 'C' && s1[2] >= 'D' && s1[2] <= 'F'){
			cout << "1100\n";
			return 0;
		} 
	}
		
	//不在一排
	else{
		cout << "1000\n";
		return 0;
	} 
		
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
