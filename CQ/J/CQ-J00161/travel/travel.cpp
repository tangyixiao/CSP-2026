#include<bits/stdc++.h>
using namespace std;
char x,y;
string a1,a2,s1,s2;
int main(){
//	freopen("travel.in","r",stdin); 
//	freopen("travel.out","w",stdout); 
	cin>>a1>>s1;
	cin>>a2>>s2;
	x=s1[2],y=s2[2];
	if(a1==a2){	
		if(s1[1]==s2[1]&&s2[0]==s1[0]){
			if((x<='C'&&y<='C')||(x>'C'&&y>'C')){
				if(max(x,y)-min(x,y)==1){
					cout<<"1111";
				}else {
					cout<<"1110";
				}
			}else {
				cout<<"1100";
			}
		}else {
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
