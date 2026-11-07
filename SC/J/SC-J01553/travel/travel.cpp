#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	int a,b;
	char n[3],m[3];
	cin>>a;
	int num1=0,num2=0;
	bool flag1=true,flag2=true;

	for(int i=0; i<3; i++) {
		cin>>n[i];
		if(n[i]>='0'&&n[i]<='9') {
			num1*=10;
			num1+=n[i]-'0';
		}
	}
	cin>>b;
	for(int i=0; i<3; i++) {
		cin>>m[i];
		if(m[i]>='0'&&m[i]<='9') {
			num2*=10;
			num2+=m[i]-'0';
		}
	}
	if(a==b) {
		cout<<"1";
		if(num1==num2) {
			cout<<"1";
			if('A'<=n[2]&&n[2]<='C') {
				flag1=true;
			} else {
				flag1=false;
			}
			if('A'<=m[2]&&m[2]<='C') {
				flag2=true;
			} else {
				flag2=false;
			}
			if(flag1==flag2) {
				cout<<"1";
				if(flag1==false&&flag2==false) {
					cout<<"1";
				} else {
					if(n[2]>m[2]) {
						if(n[2]-m[2]==1&&flag1==flag2) {
							cout<<"1";
						} else {
							cout<<"0";
						}
					} else {
						if(m[2]-n[2]==1&&flag1==flag2) {
							cout<<"1";
						} else {
							cout<<"0";
						}
					}
				}
			} else {
				cout<<"00";

			}

		} else {
			cout<<"000";
		}
	} else {
		cout<<"0000";
	}
	return 0;
}