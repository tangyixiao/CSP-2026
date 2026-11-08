#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>c2>>s1>>s2;
	long long x,r;
	r=c1[1]-'0'+(c1[0]-'0')*10;
	x=s1[1]-'0'+(s1[0]-'0')*10;
	if(r==x){
		cout <<'1';
		r=c2[1]-'0'+(c2[0]-'0')*10;
		x=s2[1]-'0'+(s2[0]-'0')*10;
		if(r==x){
			cout <<'1';
			char rr,xx;
			rr=c2[2];
			xx=s2[2];
			if(rr>='A'&&rr<='C'&&xx>='A'&&xx<='C'){
				cout <<'1';
				if((rr=='A'&&xx=='B')||(xx=='B'&&rr=='A')||(rr=='B'&&xx=='C')||(xx=='C'&&rr=='B')){
					cout <<'1'<<endl;
				}else{
					cout <<'0'<<endl;
				}
			}else if(rr>='D'&&rr<='F'&&xx>='D'&&xx<='F'){
				cout <<'1';
				if((rr=='D'&&xx=='F')||(xx=='D'&&rr=='F')){
					cout <<'1'<<endl;
				}else{
					cout <<'0'<<endl;
				}
			}else{
				cout <<"00"<<endl;
			}
		}else{
			cout <<"000"<<endl;
		}
	} else{
		cout <<"0000"<<endl;
	}
	return 0;
}

