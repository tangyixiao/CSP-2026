#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, s;
int main(){
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2){
	    s += "1";	
	}else{
		printf("0000");
		return 0;
	}
	string t1;
	string t2;
	for(int i = 0; i < 2; i++){
		t1 += s1[i];
		t2 += s2[i];		
	}
	if(t1 == t2){
	    s += "1";
	}else{
		printf("1000");
		return 0;
	} 		
		
	if(s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C'){
		s += "1";    	
	}else if(s1[2] == 'D' && s2[2] == 'F' || s1[2] == 'F' && s2[2] == 'D'){
		s += "1";    
	}else{
	    printf("1100");
		return 0;
	}	
			
	if(s1[2] == 'A' && s2[2] <= 'B' || s2[2] >= 'A' && s1[2] <= 'B'){
		s += "1";    	
	}else if(s1[2] == 'C' && s2[2] == 'B' || s1[2] == 'B' && s2[2] == 'C'){
		s += "1";    
	}else if(s1[2] == 'D' && s2[2] == 'F' || s1[2] == 'F' && s2[2] == 'D'){
		s += "1";
	}else{
		printf("1110");
		return 0;
	} 
	 	
	cout << s;
    return 0;
}
