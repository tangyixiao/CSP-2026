#include<bits/stdc++.h>
using namespace std;
int ac,bc,ap,bp,ab,bb;
string as,bs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>ac>>as>>bc>>bs;
    ap=(as[0]-'0')*10+(as[1]-'0');
    bp=(bs[0]-'0')*10+(bs[1]-'0');
    	ab=(as[2]<='C');
    	bb=(bs[2]<='C');
    if(ac==bc){
    	cout<<1;
    	if(ap==bp){
    		cout<<1;
    		if(ab==bb){
    			cout<<1;
    			if(ab==0||as[2]=='B'||bs[2]=='B'){
    				cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
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