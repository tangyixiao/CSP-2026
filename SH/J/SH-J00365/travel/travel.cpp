#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int s1,s2,s3,s4;
char ch1,ch2; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>ch1>>s3>>s4>>ch2;
	if(s1 == s3){
		if(s2 == s4){
			if((!(ch1 <= 'C')^(ch2 <= 'C'))){
				if(ch1 > ch2){
					swap(ch1,ch2);
				} 
				if(((ch1 == 'A') && (ch2 == 'B')) || ((ch1 == 'B') && (ch2 == 'C')) || ((ch1 == 'D') && (ch2 == 'F'))){
					cout<<"1111"<<endl;
				}
				else{
					cout<<"1110"<<endl;
				}
			}
			else{
				cout<<"1100"<<endl;
			}
		}
		else{
			cout<<"1000"<<endl;
		}
	}
	else{
		cout<<"0000"<<endl;
	}
	return 0;
} 
