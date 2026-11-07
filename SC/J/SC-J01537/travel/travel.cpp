#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		cout<<'1';//在同节车厢 
		if(c2[0]==c4[0]&&c2[1]==c4[1]){//在同一排 
			 cout<<'1';
			 if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C'){//过道同侧 
			 	if(c4[2]=='A'||c4[2]=='B'||c4[2]=='C'){
			 		cout<<'1';
			 		if(c2[2]-c4[2]==1||c4[2]-c2[2]==1){
			 			cout<<'1';	
					}else{
						cout<<'0';
					}
				}else{
					cout<<'0'<<'0';
				}
			}
			if(c2[2]=='D'||c2[2]=='F'){
			 	if(c4[2]=='F'||c4[2]=='F'){
			 		cout<<'1'<<'1';
				}else{
					cout<<'0'<<'0';
				}
			 }
		}else{
			cout<<'0'<<'0'<<'0';
		}
	}else{
		cout<<'0'<<'0'<<'0'<<'0';
	}
	return 0;
}