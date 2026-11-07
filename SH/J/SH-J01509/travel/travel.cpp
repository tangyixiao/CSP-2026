#include<bits/stdc++.h>
using namespace std;

int main(){
	int c1,c2,num1=0,num2=0;
	string s1,s2,f1,f2,f3,f4;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		
		for(int i=0;i<=1;i++){
			for (int o=0;o<=9;o++){
				for(int p=0;p<=5;p++){
					f1='0'+i;
					f2='0'+o;
					f3='A'+p;
					if(s1==f1+f2+f3) break;
				} 
				if(s1==f1+f2+f3) {
				num1+=o;
				break;
			}
			}
			if(s1==f1+f2+f3) {
			num1+=10*i; 
			break;
		}
		}
		for(int i=0;i<=1;i++){
			for (int o=0;o<=9;o++){
				for(int p=0;p<=5;p++){
					f1='0'+i;
					f2='0'+o;
					f4='A'+p;
					if(s2==f1+f2+f4) break;
				} 
				if(s2==f1+f2+f4) {
				num2+=o;
				break;
			}
			}
			if(s2==f1+f2+f4) {
			num2+=10*i; 
			break;
		}
		}
		if (num1==num2){
			cout<<"1";
			if(f3=="A"||f3=="B"||f3=="C"){
				if (f4=="A"||f4=="B"||f4=="C"){
					cout<<"1";
					if(f3=="B"||f4=="B"){
						cout<<"1";
					}
					else cout<<"0";
				}
				else cout<<"00";
			}
			else if (f4=="D"||f4=="F"){
					cout<<"11";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

