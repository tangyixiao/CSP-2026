#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ch1,pai1,ch2,pai2;
	char wei1,wei2;
	cin>>ch1>>pai1>>wei1>>ch2>>pai2>>wei2;
//	cout<<ch2<<" "<<pai2<<" "<<wei2;
	if(ch1!=ch2){
		cout<<"0000";
	}else{
		cout<<1;
		if(pai1!=pai2){
			cout<<"000";
		}else{
			cout<<1;
			if((wei1<='C')+(wei2<='C')==1){
				cout<<"00";
			}else{
				cout<<1;
				if((wei1<='C')&&(wei2<='C')){
					if(abs(wei1-wei2)==1){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<1;
				}
			}
		}
	}
	return 0;
}
/*
from:PC_cats

Start With OI!!

2026/10/31 08:40
*/
