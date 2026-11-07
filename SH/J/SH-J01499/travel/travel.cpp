#include <bits/stdc++.h>
using namespace std;
string a,b;
string a1,b1,s1,s2;
bool flag1,flag2,flag3;
int main(){
	cin>>a>>a1>>b>>b1;
	//cout<<a1<<" "<<b1<<endl;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=1;i++){
		s1+=a1[i];
	}
	for(int i=0;i<=1;i++){
		s2+=b1[i];
	}
	//cout<<s1<<" "<<s2<<endl;
	if(s1==s2){
		flag1=true;
	}
	if(s1==s2){
		if((a1[2]>=65 && a1[2]<=67 && b1[2]>=65 && b1[2]<=67) || (a1[2]>=68 && a1[2]<=70 && b1[2]>=68 && b1[2]<=70)){
			flag2=true;
		}
	}
	if((a1[2]=='A' && b1[2]=='B') || (a1[2]=='B' && b1[2]=='A') || (a1[2]=='B' && b1[2]=='C') || (a1[2]=='C' && b1[2]=='B') || (a1[2]=='D' && b1[2]=='F') || (a1[2]=='F' && b1[2]=='D')){
		flag3=true;
	}
	if(flag1){
		if(flag2){
			if(flag3){
				cout<<"1111";
				return 0;
			}
			cout<<"1110";
			return 0;
		}
		cout<<"1100";
		return 0;
	}
	cout<<"1000";
	return 0;
}
