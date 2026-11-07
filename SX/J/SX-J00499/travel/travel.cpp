#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
 string std_1,std_2,std_3,std_4;
 cin>>std_1>>std_2>>std_3>>std_4;
 	if(std_1==std_3){
 		cout<<'1';
		if(std_2[0]==std_4[0]&&std_2[1]==std_4[1]){
			cout<<'1';
			if((std_2[2]=='A'||'B'||'C') && (std_4[2]!='D'||'F') ){
				cout<<'1';
				if(std_2[2]=='B'||std_4[2]=='B'){
					cout<<'1';
				}else cout<<'0';
			}else if((std_2[2]=='D'||'F') || (std_4[2]!='A'||'B'||'C')){
				cout<<'1';
				if(std_4[2]=='D'||std_4[2]=='F'||std_2[2]=='F'||std_2[2]=='D'){
					cout<<'1';
				}else cout<<'0';
			}else cout<<'0'<<'0';
		}else cout<<'0'<<'0'<<'0';
	}else cout<<'0'<<'0'<<'0'<<'0';
 	return 0;
}