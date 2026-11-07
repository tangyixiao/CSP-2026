#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r", stdin);
	freopen("travel.out", "w",stdout);
	bool ht;
	string c1,s1,c2,s2;
	string lor; 
	cin>>c1>>s1>>c2>>s2;
	//车厢 
	if(c1==c2){
		cout<<"1";
		//同行 
		for(int i=0;i<=2;i++){
			if(i!=2){
				if(s1[i]==s2[i]){
					ht = 1;
					continue;
				}
				else{
					ht = 0;
					cout<<"000";
					break;
				}
			}
			else{
				cout<<"1";
			}
		}
		if(ht){
			cout<<"1";
		}		
		
				//相邻	
		if(ht){
			if(s1[2]-s2[2]==1){
				if(s1!="D"&&s1!="A"){
					cout << "1";	
				}
				else{
					cout<<"0";
				}
			}
			
			else {
				if(s2[2]-s1[2]==1){
					if(s2!="D"&&s2!="A"){
						cout << "1";	
					}
					else{
						cout << "0";
					}
				}
				else{
					cout << "0";
				}
			}
		}
			
		
	}
	else{
		cout<<"0000";
	}
	return 0;	
}