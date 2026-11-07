#include<bits/stdc++.h>
using namespace std;
string a,b;
int aa,bb;
char x,y;
bool check(char x,char y){
	if(x>='A'&&x<='C'&&y>='A'&&y<='C'){
		return 1;
	}
	if(x>='D'&&x<='F'&&y>='D'&&y<='F')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>aa>>x>>b>>bb>>y;
	if(a==b){
		cout<<1;
		if(aa==bb){
		   cout<<1;
		   if(check(x,y)){
		   	    cout<<1;
		   	    if((x+1==y||x-1==y)||(x=='D'&&y=='F')||(x=='F'&&y=='D')){
		   	    	cout<<1;
				   }else{
				   	cout<<0;
				   }
		   }else{
		   	    cout<<"00";
		   }
	    }else{
		   cout<<"000";
	    }
	}else {
		cout<<"0000";
	}

	
	return 0;
}
