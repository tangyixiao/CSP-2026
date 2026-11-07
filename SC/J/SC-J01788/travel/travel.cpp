#include <bits/stdc++.h>
using namespace std;
char a[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.getline(a+1,100);
	if(a[1]==a[8]&&a[2]==a[9]){
		cout<<"1";
		if(a[4]==a[11]&&a[5]==a[12]){
			cout<<"1";
			if((a[6]<='C'&&a[13]<='C')||(a[6]>'C'&&a[13]>'C')){
				cout<<"1";
				if(abs(a[6]-a[13])==1){
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