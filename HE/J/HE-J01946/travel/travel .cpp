#include<bits/stdc++.h>
using namespace std;
int main(){
	//feropen("travel1.in","r","std.in");
	//feropen("travel1.out","w","std.out");
	string  c1,s1,c2,s2 ;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0,1]==s2[0,1]){
			cout<<"1";
			if(s1[2]-s2[2]!=3 or s2[2]-s1[2]!=3){
				cout<<"1";
				if(s2[2]=='B'){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"0";
			}
		}else{
			cout<<"0";
		}
	}
	else{
		cout<<"0";
		}
	//fclose(std.in);fclose(std.out);
	return 0;
}
