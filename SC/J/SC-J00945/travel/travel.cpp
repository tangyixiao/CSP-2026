#include<bits/stdc++.h>
using namespace std;
bool f(string a,string b){
	int aa=a[0]-'0'+a[1]-'0',bb=b[0]-'0'+b[1]-'0';
	return aa==bb;
}
bool f2(string a,string b){
	int aa=a[2]-'A',bb=b[2]-'A';
	if((aa<=2&&bb<=2)||(aa>=3&&bb>=3))
		return 1;
	return 0;
}
bool f3(string a,string b){
	int aa=a[2]-'A',bb=b[2]-'A';
	if(abs(aa-bb)==1)
		return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(f(s1,s2)){
			cout<<"1";
			if(f2(s1,s2)){
				cout<<"1";
				if(f3(s1,s2))
					cout<<"1";
				else
					cout<<"0";	
			}else
				cout<<"00";
		}else
			cout<<"000";
	}else	
		cout<<"0000";
	return 0;
}