#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,sa,cb,sb;
	cin>>ca>>sa>>cb>>sb;
	if(ca==cb){
	if(ca=="02"){
		cout<<"1";
	}
	}else{
		cout<<"0000";
		return 0;
	}//1
	for(int i=1;i<2;i++){
	if(sa!=sb){
		if(sa[i]==sb[i]){
		cout<<"1";
		}else{
		cout<<"000";
		return 0;
		}
	}
	//2
}
		if(sa=="01C"&&sb=="01D"){
			cout<<"00";
			return 0;
		}
		if(sa=="01D"&&sb=="01C"){
			cout<<"00";
			return 0;
		}
		cout<<"1";//3
		if(sa=="01A"&&sb=="01B"){
			cout<<"1";
			return 0;
		}
		if(sa=="01B"&&sb=="01A"){
			cout<<"1";
			return 0;
		}
		if(sa=="01B"&&sb=="01C"){
			cout<<"1";
			return 0;
		}
		if(sa=="01C"&&sb=="01B"){
			cout<<"1";
			return 0;
		}
		if(sa=="01D"&&sb=="01F"){
			cout<<"1";
			return 0;
		}
		if(sa=="01F"&&sb=="01D"){
			cout<<"1";
			return 0;
		}
		cout<<"0";
	return 0;
} 
