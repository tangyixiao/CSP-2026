#include <iostream>
#include <string>
using namespace std;
bool fre(char x,char y){
	if(x=='A'||x=='B'||x=='C'){
		if(y=='B'||y=='A'||y=='C'){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(y=='F'||y=='D'){
			return 1; 
		}
		else{
			return 0;
		}
	}


}
bool pre(char x,char y){
	if(x=='A'){
		if(y=='B'){
			return 1;
		}
		else{
			return 0;
		}
	}
	else if(x=='B'){
		if(y=='A'||y=='C'){
			return 1;
		}
		else {
			return 0;
		}
	}
	else if(x=='C'){
		if(y=='B'){
			return 1;
		}
		else{
			return 0;
		}
	}
	else if(x=='D'){
		if(y=='F'){
			return 1;
		}
		else {
			return 0;
		}
	}
	else{
		if(y=='D'){
			return 1;
		}
		else{
			return 0;
		}
		
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	long long a=c1[0]-'0';//小R车厢号 
	a=a*10+c1[1]-'0';
	
	long long b=c2[0]-'0';//小X车厢号
	b=b*10+c2[1]-'0';
	
	long long c=(s1[0]-'0')*10+(s1[1]-'0');//小R排数
	
	long long d=(s2[0]-'0')*10+(s2[1]-'0');//小X排数
	
	if(a==b){//两张车票对应的座位是否在同一节车厢
		cout<<1;
		if(c==d){//两张车票对应的座位是否在同一节车厢的同一排
			cout<<1;
			if(fre(s1[2],s2[2])){//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
				cout<<1;
				if(pre(s1[2],s2[2])){//两张车票对应的座位是否相邻
					cout<<1;
				}
				else{
					cout<<0; 
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
