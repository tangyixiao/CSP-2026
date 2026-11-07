#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,n1,c2,n2;
	cin>>c1>>n1>>c2>>n2;
	if(c1==c2){
		cout<<"1";
		string row1,row2;
		char num1,num2;
		row1[0]=n1[0];
		row1[1]=n1[1];
		num1=n1[2];
		row2[0]=n2[0];
		row2[1]=n2[1];
		num2=n2[2];
		if(row1[0]==row2[0]&&row1[1]==row2[1]){
			cout<<"1";
			// ABC
			if(((num1>='A'&&num1<='C')&&(num2>='A'&&num2<='C'))
			||((num1>='D'&&num1<='E')&&(num2>='D'&&num2<='E'))){
				cout<<"1";
				if(abs(num1-num2)<=1){
					cout<<"1";
				}
				else{
					cout<<"0";
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
	return 0;
}





