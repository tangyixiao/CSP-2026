#include <iostream> 
#include <cstdio>
#include <string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << "1";
		char x1,xx1,y1,x2,xx2,y2;
		x1=s1[0];xx1=s1[1];y1=s1[2];
		x2=s2[0];xx2=s2[1];y2=s2[2];
		if(x1==x2&&xx1==xx2){
			cout << "1";
			if((y1=='F'&&y2=='D')||(y1=='D'&&y2=='F')){
				cout << "11";
				return 0;
			}else if((y1=='A'||y1=='B'||y1=='C')&&(y2=='A'||y2=='B'||y2=='C')){
				cout << "1";
				if(y1-y2==1||y2-y1==1){
					cout << "1";
					return 0;
				}else{
					cout << "0";
					return 0;
				}
			}else{
				cout << "00";
				return 0;
			}
		}else{
			cout << "000";
			return 0;
		}
	}else{
		cout << "0000";
		return 0;
	}
	return 0;
}
