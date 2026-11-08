#include<bits/stdc++.h>
using namespace std;

string tempa="",tempb="";
char ta,tb;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    
    
    string ca,sa,cb,sb;
    cin>>ca>>sa>>cb>>sb;
    
    string s="";
    bool ok=true;
    
    //1
	if(ca==cb) s+="1";
	else{
		s+="0"; ok=false;
	}
	tempa+=sa[0];tempa+=sa[1];
	tempb+=sb[0];tempb+=sb[1];
	
	//2
	if(tempa==tempb&&ok)s+="1";
	else{
		s+="0"; ok=false;
	}
	
	ta=sa[2]; tb=sb[2];
	
	//3
	if(ta>'C'&&tb>'C'&&ok)s+="1";
	else if(ta<'D'&&tb<'D'&&ok) s+="1";
	else{
		s+="0"; ok=false;
	}
	
	//4
	if(ok)
	if(ta-tb==1||ta-tb==-1){
		s+="1";
	}else{
		s+="0";
	}
	else
	s+="0";
	
	cout<<s;
	
	return 0;
} 
