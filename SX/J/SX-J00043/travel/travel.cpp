#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1!=c3){
		cout<<"0000";
	}else{
		cout<<1;
		string a;
		for(int i=0;i<=1;i++){
			a=a+c2[i];
		}string b;
 		for(int i=0;i<=1;i++){
			b=b+c4[i];
		}//cout<<endl<<a<<endl<<b<<endl;
		if(a!=b){
			cout<<0;
		}else{
			cout<<1;
		}
		char d=c2[2],e=c4[2];
		//cout<<endl<<d<<endl<<e<<endl;
		if(a==b&&((d<'D'&&e<'D')||(d>='D'&&e>='D'))){
			cout<<1;
		}else{
			cout<<0;
		}
		if(abs(d-e)==1&&(!(d=='D'&&e=='C')&&!(d=='C'&&e=='D'))&&a==b){
			cout<<1;
		}else{
			int num=(c2[0]-'0')*10+(c2[1]-'0'),num1=(c4[0]-'0')*10+(c4[1]-'0');
			if(abs(num-num1)==1&&c2[2]==c4[2]){
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}
}