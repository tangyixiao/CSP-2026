#include <iostream>
#include <string>
using namespace std;
int a,b;
string aa,bb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>aa>>b>>bb;
	if(a==b){
		cout<<"1";
		if(aa[0]==bb[0]&&aa[1]==bb[1]){
			cout<<"1";
			if((aa[2]<='C'&&bb[2]<='C')){
				cout<<"1";
				if(abs((aa[2]-'0')-(bb[2]-'0'))==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else if(aa[2]>='D'&&bb[2]>='D'){
				cout<<"11";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
