#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,asit,b,bsit;
	cin>>a>>asit>>b>>bsit;
	if (a==b){
		cout<<'1';
		if (asit[0]==bsit[0] && asit[1]==bsit[1]){
			cout<<'1';
			if (asit[2]<='C' && bsit[2]<='C' || asit[2]>='D' && bsit[2]>='D'){
				cout<<'1';
				if (abs(asit[2]-bsit[2])==1){
					cout<<'1';
				}else{
					cout<<'0';
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
