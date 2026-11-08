#include<bits/stdc++.h>
using namespace std;
struct node{
	int p,h;
}a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	a[1].h=s1[2]-'A'+1;
	a[1].p=(s1[0]-'0')*10+(s1[1]-'0');
	a[2].h=s2[2]-'A'+1;
	a[2].p=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(a[1].p==a[2].p){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(a[1].h==1&&a[2].h==2){
		cout<<"11"; 
	}if(a[1].h==1&&a[2].h==3){
		cout<<"10"; 
	}if(a[1].h==1&&a[2].h==4){
		cout<<"00"; 
	}if(a[1].h==1&&a[2].h==5){
		cout<<"00"; 
	}
	if(a[1].h==2&&a[2].h==1){
		cout<<"11"; 
	}if(a[1].h==2&&a[2].h==3){
		cout<<"11"; 
	}if(a[1].h==2&&a[2].h==4){
		cout<<"00"; 
	}if(a[1].h==2&&a[2].h==5){
		cout<<"00";
	}
	if(a[1].h==3&&a[2].h==4){
		cout<<"00"; 
	}if(a[1].h==3&&a[2].h==5){
		cout<<"00"; 
	}if(a[1].h==3&&a[2].h==2){
		cout<<"11"; 
	}if(a[1].h==3&&a[2].h==1){
		cout<<"10"; 
	}
	if(a[1].h==4&&a[2].h==5){
		cout<<"11"; 
	}if(a[1].h==4&&a[2].h==3){
		cout<<"00"; 
	}if(a[1].h==4&&a[2].h==2){
		cout<<"00"; 
	}if(a[1].h==4&&a[2].h==1){
		cout<<"00"; 
	}
	if(a[1].h==5&&a[2].h==4){
		cout<<"11"; 
	}if(a[1].h==5&&a[2].h==3){
		cout<<"00"; 
	}if(a[1].h==5&&a[2].h==2){
		cout<<"00"; 
	}if(a[1].h==5&&a[2].h==1){
		cout<<"00"; 
	}
	return 0;
} 
