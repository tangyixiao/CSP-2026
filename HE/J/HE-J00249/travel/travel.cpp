#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			cout<<"0000";
			return 0;
		}
	}
	cout<<"1";
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			cout<<"000";
			return 0;
		}
	}
	cout<<"1";
	a=s1[2]-' ';
	b=s2[2]-' ';
	if(a<=35&&a>=33&&b>=33&&b<=35){
		cout<<"1";
		if(a-1==b||b-1==a||a+1==b||b+1==a){
			cout<<"1";
			return 0;
		}else{
			cout<<"0";
			return 0;
		}
	}else if(a<=38&&b<=38&&a>=36&&b>=36){
		cout<<"1";
		if(a-b==2||b-a==2){
			cout<<"1";
		}else{
			cout<<"0";
			return 0;
		}
	}else{
		cout<<"00";
		return 0;
	}
	return 0;
}
