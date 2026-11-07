#include<bits/stdc++.h>
using namespace std;
string a1;
string a2;
string b1;
string b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a1>>a2>>b1>>b2;
	if(a1[0]==b1[0] and a1[1]==b1[1]){
		cout<<1;
		if(a2[0]==b2[0] and a2[1]==b2[1]){
			cout<<1;
			int x=a2[2] - '0';
			int y=b2[2] - '0';
			if(x<=19 and y<=19){
				cout<<1; 
				if(x-y==1 or x-y==-1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else if(x>=20 and y>=20){
				cout<<1; 
				if(x-y==1 or x-y==-1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	
	
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
