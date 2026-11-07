#include<bits/stdc++.h>
using namespace std;
int a[4];
string s;
bool cmp(string x,string y){
	for(int i=1;i<=3;i++){
		if(x[1]+x[2]==y[1]+y[2])return 1;
		return 0;
	}
}
bool cmp1(string x,string y){
	for(int i=1;i<=3;i++){
		if((x[3]=='A'||x[3]=='B'||x[3]=='C'&&y[3]=='D'||y[3]=='F')||(y[3]=='A'||y[3]=='B'||y[3]=='C'&&x[3]=='D'||x[3]=='F')){
			return 0;
		}
		return 1;
	}	
}
bool cmp2(string x,string y){
	for(int i=1;i<=3;i++){
		if(!(x[3]=='A'||x[3]=='B'||x[3]=='C'&&y[3]=='D'||y[3]=='F')||!(y[3]=='A'||y[3]=='B'||y[3]=='C'&&x[3]=='D'||x[3]=='F')){
			if(!x[3]=='A'&&y[3]=='C'||!y[3]=='A'&&x[3]=='C')
			return 1;
			return 0;
		}
		return 0;
	}	
}
int main(){
freopen("traval.in","r",stdin);
freopen("traval.out","w",stdout); 
	for(int i=1;i<=2;i++){
		cin>>a[i];
		cin>>s;
		if(a[1]==a[2]){
			cout<<1;
			if(!cmp())cout<<1;
			cout<<0;
			if(!cmp1())cout<<1;
			cout<<0;
			if(!cmp2())cout<<1;
			cout<<0;
		}
		else{
			cout<<0;
			cout<<1;
			if(!cmp())cout<<1;
			cout<<0;
			if(!cmp1())cout<<1;
			cout<<0;
			if(!cmp2())cout<<1;
			cout<<0;
		}
	}
	return 0;
