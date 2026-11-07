#include<bits/stdc++.h>
using namespace std;
bool same_car=true;
bool same_row=false;
bool same_side=false;
bool nber=false;
string c1,s1,c2,s2;
bool is_second(string c){
	if(c=="01"||c=="16"){
		return false;
	}
	return true;
}
int getn(string s){
	return ((s[0]-'0')*10+(s[1]-'0'));
}
//ABC DF
//012 34
int getc(string s){
	if(s[2]=='F') return 4;
	return s[2]-'A';
}
bool down(int c){
	if(c<=2) return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
		same_car=false;
	if((!is_second(c1))||(!is_second(c2)))
		same_car=false;
	int s1n=getn(s1);
	int s2n=getn(s2);
	int s1c=getc(s1);
	int s2c=getc(s2);
	if((s1n==s2n)&&same_car){
		same_row=true;
	}
	if((down(s1c)==down(s2c))&&same_row&&same_car){
		same_side=true;
	}
	if(same_car&&same_side){
		int width=abs(s1n-s2n);
		int height=abs(s1c-s2c);
		if((width+height)<2){
			nber=true;
		}
	}
	cout<<same_car<<same_row<<same_side<<nber<<"\n";
	return 0;
}
