#include<bits/stdc++.h>
using namespace std;
struct lk{
	string s;
	string ss;
	int sc;
	int ps;
	int zw;
	int lla;
}l[5];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>l[0].s>>l[0].ss>>l[1].s>>l[1].ss;
	for(int i=0;i<l[0].s.size();i++){
		if(l[0].s[i]!='0'){
			l[0].sc+=pow(10,(l[0].s.size()-i-1))*(l[0].s[i]-'0');
		}
	}
	for(int i=0;i<l[1].s.size();i++){
		if(l[1].s[i]!='0'){
			l[1].sc+=pow(10,(l[1].s.size()-i-1))*(l[1].s[i]-'0');
		}
	}
	for(int i=0;i<l[0].ss.size();i++){
		if('0'<=l[0].ss[i] && l[0].ss[i]<='9'){
			l[0].ps+=pow(10,l[0].ss.size()-2-i)*(l[0].ss[i]-'0');
		}
		else{
			l[0].zw=int(l[0].ss[i]);
		}
	}
	for(int i=0;i<l[1].ss.size();i++){
		if('0'<=l[1].ss[i] && l[1].ss[i]<='9'){
			l[1].ps+=pow(10,l[1].ss.size()-2-i)*(l[1].ss[i]-'0');
		}
		else{
			l[1].zw=int(l[1].ss[i]);
		}
	}
	if(l[0].zw>=int('D') && l[0].zw<=int('F')){
		l[0].lla=1;
	}
	else{
		l[0].lla=0;
	}
	if(l[1].zw>=int('D') && l[1].zw<=int('F')){
		l[1].lla=1;
	}
	else{
		l[1].lla=0;
	}
	if(l[0].sc==l[1].sc){
		cout<<'1';
		if(l[0].ps==l[1].ps){
			cout<<'1';
			if(l[0].lla==l[1].lla){
				cout<<'1';
				if(abs(l[0].zw-l[1].zw)==1){
					cout<<'1';
				}
				else{
					cout<<'0';
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