#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int real_num1,real_num2,seat1,seat2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	for(int i=0;i<int(b.size())-1;i++){
		real_num1=real_num1*10+int(b[i]-'0');
	}
	for(int i=0;i<int(d.size())-1;i++){
		real_num2=real_num2*10+int(d[i]-'0');
	}
	seat1=b[2]-'A'+1;
	seat2=d[2]-'A'+1;
	if(a!=c){
		cout<<0;
	}
	else{
		cout<<1;
	}
	if(a==c&&real_num1==real_num2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(a==c&&(real_num1==real_num2)&&((seat1<=3&&seat2<=3)||(seat1>3&&seat2>3))){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(a==c&&(real_num1==real_num2)&&((seat1<=3&&seat2<=3)||(seat1>3&&seat2>3))&&abs(seat1-seat2)==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}