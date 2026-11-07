#include<bits/stdc++.h>
using namespace std;
string s1,s2,ans="",pai1,pai2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	
	int pai1=s1[0]+s1[1],pai2=s2[0]+s2[1];
	if(pai1!=pai2){
		cout<<"1000";
		return 0;
	}
	int seat1=int(s1[2]-'A'+1),seat2=int(s2[2]-'A'+1);
	if(seat1<seat2){
		swap(seat1,seat2);
	}
	if(!((seat1-seat2<=2)&&!(seat1==4&&seat2==3))){
		cout<<"1100";
		return 0;
	}
	if(!((seat1-seat2==1)||(seat1==6&&seat2==4))){
		cout<<"1110";
		return 0;
	}
	
	cout<<"1111";
	return 0;
}
