#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin >> a >> c >> b >> d;
	if(a==1&&b==1){
		cout << 1;
	}
	else if(a>=2&&b>=2){
		cout << 1;
	}else{
		cout << 0000;
		return 0;
	}if(a==b){
		cout << 1;
	}else{
		cout <<000;
		return 0;
	}
	int a1=(c[0]-'0'),a2=(c[1]-'0'),a3=(c[2]-'A');
	int b1=(d[0]-'0'),b2=(d[1]-'0'),b3=(d[2]-'A');
//	cout <<endl<<a2<<" "<<b2<<endl;
//	cout <<endl<<a <<" "<<a1 << " " <<a2<<" "<< a3<<endl;
//	cout <<b<<" " <<b1 << " " <<b2<<" "<< b3<<endl;
	
	if(a2==b2&&a1==b1){
		cout << 1;
	}else{
		cout << 00;
		return 0;
	}
	if((a3>=0&&a3<=2)&&(b3>=0&&b3<=2)&&(abs(a3-b3)==1)){
		cout << 1;
	}else if((a3>=3&&a3<=4)&&(b3>=3&&b3<=4)){
		cout << 1;
	}else{
		cout <<0;
	}
	return 0;
} 
