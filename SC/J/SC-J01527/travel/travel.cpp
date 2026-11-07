#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(c1==c2){
		cout<<1;
	}
	char a1,a2,b1,b2;
	char a3,b3;
	a1=s1[0],a2=s1[1],a3=s1[2];
	b1=s2[0],b2=s2[1],b3=s2[2];
	if(a1==b1 && a2==b2){
		cout<<1;
	}else{
		cout<<0; 
	}
	if(a1==b1 && a2==b2 && a3+1!='D' && a3-1!='D' && b3+1!='D' && b3-1!='D'){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a3=='D'||a3=='F' && b3=='D'||b3=='F'){
		cout<<1;
		return 0;
	}else{
		cout<<0;
		return 0;
	}
	if(a3+1==b3 ||a3-1==b3){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}