#include<bits/stdc++.h>
using namespace std;
bool check2(const int &c1,const int &c2,const string &s1,const string &s2){
	if(c1==c2){
		cout<<"1";
		return true;
	}else{
		cout<<"0";
		return false;
	}
}
bool check3(const int &c1,const int &c2,const string &s1,const string &s2){
	if(check2(c1,c2,s1,s2)==true){
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				cout<<"0";
				return false;
			}
		}
		cout<<"1";
		return true;
	}else{
		cout<<"0";
		return false;
	}
}
bool check4(const int &c1,const int &c2,const string &s1,const string &s2){
	if(check3(c1,c2,s1,s2)==true){
		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
			cout<<"1";
			return true;
		}else{
			cout<<"0";
			return false;
		}
	}else{
		cout<<"0";
		return false;
	}
	return false;
}
void check1(const int &c1,const int &c2,const string &s1,const string &s2){
	if(check4(c1,c2,s1,s2)==true){
		if(abs(s1[2]-s2[2]<=1)){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	check1(c1,c2,s1,s2);
	fclose(stdin);
	fclose(stdout);
	return 0;
}