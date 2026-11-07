#include <bits/stdc++.h>
using namespace std;

int r;    //R车厢号 
int x;    //X车厢号
int rp;    //排号 
int xp;
char rc;
char xc;
string rs;
string xs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> r >> rs >> x >> xs;
	if(r!=x){
		cout << "0000";
		return 0;
	}else if(r==x){   
		cout << "1";    //在同一车厢 
	}
	rp = (int(rs[0])-48)*10 + int(rs[1])-48;
	xp = (int(xs[0])-48)*10 + int(xs[1])-48;
	rc = rs[2];
	xc = xs[2];
	if(rp==xp){
		cout << "1";   //在同一排 
	}else{
		cout << "000";
		return 0;
	}
	if(rc>='A'&&rc<='C'&&xc>='A'&&xc<='C'){
		cout << "1";    //在同一侧 ABC
		if(rc==xc+1||rc==xc-1){
			cout << "1";    //相邻
			return 0; 
		}else{
			cout << "0";    //不相邻 
			return 0;
		}
	}else if(rc=='D'&&xc=='F'||rc=='F'&&xc=='D'){
		cout << "11";
		return 0;
	}else{
		cout << "00";
	}
	return 0;
}










