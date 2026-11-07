#include<bits/stdc++.h>
using namespace std;
char x,y;
string c1,c2,s1,s2;
int cc1,cc2,num1,num2,a,b;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	cc1=(c1[0]-'0')*10+(c1[1]-'0');
	cc2=(c2[0]-'0')*10+(c2[1]-'0');
	if(cc1==cc2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	num1=(s1[0]-'0')*10+(s1[1]-'0');
	num2=(s2[0]-'0')*10+(s2[1]-'0');
	if(num1==num2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	x=s1[2],y=s2[2];
	if((x<='C'&&y<='C')||(x>'C'&&y>'C'&&x<='F'&&y<='F')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	a=x-'A',b=y-'A';
	if(x=='F'){
		a--;
	}
	if(y=='F'){
		b--;
	}
	if(abs(a-b)==1){
		cout<<1;
	}else{
		cout<<0;
	}
	 return 0;
} 
