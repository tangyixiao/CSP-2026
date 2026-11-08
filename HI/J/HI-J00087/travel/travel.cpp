#include<bits/stdc++.h>
using namespace std;

string a,b,c,d;
long long num=0;
bool bol=true;

void jkl(){
	if(a[0]==c[0]&&a[1]==c[1]){
		num++;
		cout<<'1';
	}
	else{
		return;
	}
	if((b[0]==d[0])&&(b[1]==d[1])&&bol){
		num++;
		cout<<'1';
	}
	else{
		return;
	}
	if((b[2]-'A'<=2&&d[2]-'A'<=2)||(b[2]-'A'>2&&d[2]-'A'>2)&&bol){
		num++;
		cout<<'1';
	}
	else{
		return;
	}
	if((abs((b[2]-'A')-(d[2]-'A'))==1)||((b[2]=='F'||d[2]=='F')&&(abs((b[2]-'A')-(d[2]-'A'))==2))&&bol){
		num++;
		cout<<'1';
	}
	else{
		return;
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	jkl();
	for(int i=1;i<=4-num;i++){
		cout<<'0';
	}
	return 0;
}
