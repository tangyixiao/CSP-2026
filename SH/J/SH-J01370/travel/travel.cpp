#include<bits/stdc++.h>
using namespace std;

string s1,s2,c1,c2;

int main(){
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	cin>>s1>>c1>>s2>>c2;
//	cout<<s1<<c1<<s2<<c2;
	if(s1==s2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	int a1=c1[0]-'0',a2=c1[1]-'0',b1=c2[0]-'0',b2=c2[1]-'0';
//	cout<<a1<<a2<<b1<<b2;
	if(a1==b1&&a2==b2){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	char seat1=c1[2],seat2=c2[2];
	if(seat1=='A'||seat1=='B'||seat1=='C'){
		if(seat2=='D'||seat2=='E'){
			cout<<"00";
			return 0;
		}
		else{
			cout<<1;
			if(seat1=='B'||seat2=='B'){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		if(seat2=='D'||seat2=='E'){
			cout<<"11";
		}
		else{
			cout<<"00";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
