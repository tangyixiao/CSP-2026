#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2){
		cout << 1;
		string che1,che2,wei1,wei2;
	
		for(int i = 0;i < s1.size();i++){
			if(i < 2) che1 += s1[i];
			else wei2 += s1[i];
		}
		
		for(int i = 0;i < s2.size();i++){
			if(i < 2) che2 += s2[i];
			else wei2 += s2[i];
		}
	
		if(che1 == che2){
			cout << 1;
			string wei = wei1 + wei2;
			if(wei != "AD" && wei != "AE" && wei != "BD" && wei != "BE" && wei != "CD" && wei != "CE"
			 && wei != "DA" && wei != "EA" && wei != "DB" && wei != "EB" && wei != "DC" && wei != "EC"){
				cout << 1;
				if(wei == "AB" || wei == "BA" || wei == "BC" || wei == "CB" || wei == "DE" || wei == "ED"){
					cout << 1;
				}else{
					cout << 0;
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}
	else {
		cout << "0000";
	}
	
	
	
	
	
	
	
	cout << endl;
	
	
	return 0;
}
