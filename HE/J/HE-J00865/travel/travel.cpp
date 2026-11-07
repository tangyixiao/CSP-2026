#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			cout<<"0000";
			return 0;
		}
	}
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			cout<<"1000";
			return 0;
		} 
	}
	int a=s1[2]-'C',b=s2[2]-'C';
	if(!((a<=0&&b<=0)||(a>0&&b>0))){
		cout<<"1100";
		return 0;
	}
	if(abs(a-b)!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
/*
02 01A 02 01B
02 01C 02 01A
02 01C 02 01D
02 02B 02 01A
02 01A 03 01A
*/
