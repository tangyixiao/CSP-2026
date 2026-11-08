#include<bits/stdc++.h>
using namespace std;
bool a(char x3,char y3){
	if((x3=='C' && y3=='D')||(x3=='D' && y3=='C')){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1="0",a2="0",a3="0",a4="0";
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int x1=s1[0]-'0',x2=s1[1]-'0',y1=s2[0]-'0',y2=s2[1]-'0';
	char x3=s1[2],y3=s2[2];
	if(c1==c2 &&(c1!="01" && c2!="01") && (c1!="16" && c2!="16")){
		a1="1";
		if(x1*10+x2==y1*10+y2){
			a2="1";
				if(('A'<=x3<='C') && ('A'<=y3<='C') && (a(x3,y3))){
					a3="1";
				}
				if(('D'<=x3<='F') && ('D'<=y3<='F') && (a(x3,y3))){
					a3="1";
				}
				if(a3=="1"){
					if((x3=='D' && y3=='F') || (x3=='F' && y3=='D')){
						a4="1";
					}
					if((x3+1==y3 && x3!='C') || (x3-1==y3 && x3!='D')){
						a4="1";
					}
				}
		}
		cout<<a1<<a2<<a3<<a4;
	}
	else{
		cout<<a1<<a2<<a3<<a4;
	}
	return 0;
}
