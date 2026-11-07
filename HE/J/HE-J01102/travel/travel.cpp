#include<bits/stdc++.h>
using namespace std;
string a,c;
char b[50],d[50];
char f='F';
char h='D';

int main(){
freopen("trave.in","r",stdin);
freopen("trave.out","w",stdout);
cin>>a;
cin>>b[1]>>b[2]>>b[3];
cin>>c;
cin>>d[1]>>d[2]>>d[3];
if(a==c){
	cout<<"1";
}else{
	cout<<"0000";
	return 0;
}
if(b[1]==d[1]&&b[2]==d[2]){
	cout<<"1";
	if(b[3]==f||b[3]==h){
		if(d[3]==f||d[3]==h){
			cout<<"1";
			if(b[1]==d[1]||b[2]=='9'||d[2]=='9'){
				if(int(b[2])==int(d[2])+1||int(b[2])==int(d[2])-1){
					cout<<"1";
				}else if(int(b[3])==int(d[3])+1||int(b[3])==int(d[3])-1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
		}else{
			cout<<"00";
			return 0;
		}
	}else{
		if(d[3]!=f&&d[3]!=h){
			cout<<"1";
			if(b[1]==d[1]||b[2]=='9'||d[2]=='9'){
				if(int(b[2])==int(d[2])+1||int(b[2])==int(d[2])-1){
					cout<<"1";
				}else if(int(b[3])==int(d[3])+1||int(b[3])==int(d[3])-1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
		}else{
			cout<<"00";
			return 0;
		}
	}
}else{
	cout<<"000";
	return 0;
}
return 0;
}
