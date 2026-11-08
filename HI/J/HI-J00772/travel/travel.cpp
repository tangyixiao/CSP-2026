#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d;
	if(a==c&&a!="1"&&a!="16"&&c!="1"&&c!="16"&&a<="17"&&c<="17"){
		cout<<"1";
		for(int i=0;i<=b.size();i++){
			if(b[i]>'0'&&b[i]<='9'){
				e=e+b[i];
			}
		}
		for(int i=0;i<=d.size();i++){
			if(d[i]>'0'&&d[i]<='9'){
				f=f+d[i];
			}
		}
		if(e==f){
			cout<<"1";
		for(int i=0;i<=b.size();i++){
			if(b[i]>'A'&&b[i]<='F'){
				g=g+b[i];
			}
		}
		for(int i=0;i<=d.size();i++){
			if(d[i]>'A'&&d[i]<='F'){
				h=h+d[i];
			}
		}
		if(g<="C"&&h<="C"){
			cout<<"1";
			if(g=="B"||h=="B"){
				cout<<"1";
				return 0;
			}
			else{
				cout<<"0";
				return 0;
			}
		}
		if((g=="D"&&h=="F")||((h=="D"&&g=="F"))){
			cout<<"11";
			return 0;
		}
		else{
			cout<<"00";
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
	
	return 0;
}
