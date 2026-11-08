#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
    string ca,sa,cb,sb;
    cin>>ca>>sa>>cb>>sb;
    string a="",b="",c="",d="";
    a+=sa[0];
    a+=sa[1];
    b+=sb[0];
    b+=sb[1];
    c+=sa[2];
    d+=sb[2];
    if(ca==cb){
    	cout<<"1";
    	if(a==b){
    		cout<<"1";
    		if(c=="A"){
    			if(d=="B"){
    				cout<<"11";
    				return 0;
				}
				if(d=="C"){
    				cout<<"10";
    				return 0;
				}
				cout<<"00";
				
			}
			if(c=="B"){
    			if(d=="A"){
    				cout<<"11";
    				return 0;
				}
				if(d=="C"){
    				cout<<"11";
    				return 0;
				}
				cout<<"00";
				
			}
			if(c=="C"){
    			if(d=="B"){
    				cout<<"11";
    				return 0;
				}
				if(d=="A"){
    				cout<<"10";
    				return 0;
				}
				cout<<"00";
				
			}
			if(c=="D"){
    			if(d=="F"){
    				cout<<"11";
    				return 0;
				}
				cout<<"00";	
			}
			if(c=="F"){
    			if(d=="D"){
    				cout<<"11";
    				return 0;
				}
				cout<<"00";	
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
