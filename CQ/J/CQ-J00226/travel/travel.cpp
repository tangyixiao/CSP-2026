#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int x,y,z,w,set_a,set_b;
bool check1(){
	int cnt[5]={1,1,1,0,0};
	return cnt[set_a]==cnt[set_b];
}
bool check2(){
	int cnt[5]={-1,2,-1,-100,101};
	if( cnt[set_a]+cnt[set_b]==1) return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
    cin>>c1>>s1>>c2>>s2;
	x=(c1[0]-'0')*10+c1[1]-'0';
	y=(c2[0]-'0')*10+c2[1]-'0';
	z=(s1[0]-'0')*10+s1[1]-'0';
 	w=(s2[0]-'0')*10+s2[1]-'0';
	set_a=s1[2]-'A';
	set_b=s2[2]-'A';
	if(set_a==5) set_a--;
	if(set_b==5) set_b--;
	int flag=1;
	if(x==y){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if(z==w&&flag){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if(check1()&&flag){
		cout<<1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if(check2()&&flag){
		cout<<1;
	}
	else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
