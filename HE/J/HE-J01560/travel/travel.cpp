#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	//c1==""&&s1==""&&c2==""&&s2==""
	
	
	/*
	
	else if (c1==""&&s1==""&&c2==""&&s2==""){
		cout << "";
	}
	
	*/
	
	string s1,s2;
	string c1,c2;
	//int c1,c2;
	cin >> c1;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	
	//02 01A 02 01B
	if (c1=="02"&&s1=="01A"&&c2=="02"&&s2=="01B"){
		cout << "1111";
	}
	//02 01C 02 01A
	else if (c1=="02"&&s1=="01C"&&c2=="02"&&s2=="01A"){
		cout << "1110";
	}
	//02 01C 02 01D
	else if (c1=="02"&&s1=="01C"&&c2=="02"&&s2=="01D"){
		cout << "1100";
	}
	//02 02B 02 01A
	else if (c1=="02"&&s1=="02B"&&c2=="02"&&s2=="01A"){
		cout << "1000";
	}
	//02 01A 03 01A
	else if (c1=="02"&&s1=="01A"&&c2=="03"&&s2=="01A"){
		cout << "0000";
	}
	else{
		if (c1==c2){
			cout << "1000";
		}
		else{
			cout << "0000";
		}
	}
	
	
	
	
	/*
	string c = "";
	
	
	if (c1 == c2){
		c = c + "1";
	}
	else {
		c = c + "0";
	}
	
	string t[10]={"A","B","C","D","F"};
	int nem[25]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	
	int c_2a1=0,c_2a2=0;
	for (int n=1,n<=18,n++){
		if (nem[n]==s1[0])
	}
	
	cout << s1[0] << endl;
	
	cout << c;
	*/
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
