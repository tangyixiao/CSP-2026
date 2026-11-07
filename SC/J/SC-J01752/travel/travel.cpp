#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("teavel.out","w",stdout);
	int c1,c2;
	string s1,s2,a,b;
	cin>>c1>>s1>>c2>>s2;
	a=s1.back();
	b=s2.back();
	s1.pop_back();
	s2.pop_back();
	if(c1!=01&&c1!=16&&c2!=01&&c2!=16){
		if(c1==c2){
			cout<<"1";
			if(s1==s2){
				cout<<"1";
				if(a=="A"&&b=="B"){
					cout<<"11";
					return 0;
				}
				if(a=="B"&&b=="A"){
					cout<<"11"; 
					return 0;
				}
				if(a=="B"&&b=="C"){
					cout<<"11";
					return 0;
				}
				if(a=="C"&&b=="B"){
					cout<<"11";
					return 0;
				}
				if(a=="D"&&b=="F"){
					cout<<"11";
					return 0;
				}
				if(a=="A"&&b=="D"){
					cout<<"00";
					return 0;
				}
				if(a=="A"&&b=="F"){
					cout<<"00";
					return 0;
				}
				if(a=="B"&&b=="D"){
					cout<<"00";
					return 0;
				}
				if(a=="B"&&b=="F"){
					cout<<"00";
					return 0;
				}
				if(a=="C"&&b=="D"){
					cout<<"00";
					return 0;
				}
				if(a=="C"&&b=="F"){
					cout<<"00";
					return 0;
				}
				if(a=="D"&&b=="A"){
					cout<<"00";
					return 0;
				}
				if(a=="D"&&b=="B"){
					cout<<"00";
					return 0;
				}
				if(a=="D"&&b=="C"){
					cout<<"00";
					return 0;
				}
				if(a=="F"&&b=="A"){
					cout<<"00";
					return 0;
				}
				if(a=="F"&&b=="B"){
					cout<<"00";
					return 0;
				}
				if(a=="F"&&b=="C"){
					cout<<"00";
					return 0;
				}
				else{
					cout<<"10";
					return 0;
				}
			}
			else{
				cout<<"000";
				return 0;
			}
		} 
		else{
			cout<<"0000";
			return 0;
		}
		
	}
	else{
		cout<<"0000";
	}
	return 0;
}