#include<bits/stdc++.h> 
using namespace std;
string q;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int a,c,b1,d1;
    char b2,d2;
    string b,d;
    cin>>a>>b>>c>>d;
    b1=b[1];
    d1=d[1];
    b2=b[2];
    d2=d[2];
    if(a==c){
    	if(b1==d1){
    		if((b2!='C'||d2!='D')&&(b2!='D'||d2!='C')){
    			if(b2+1==d2||b2-1==d2){
    				cout<<1111;
    				return 0;
				}else{
					cout<<1110;
					return 0;
				}
			}else{
				cout<<1100;
				return 0;
			}
		}else{
			cout<<1000;
			return 0;
		}
	}else{
		cout<<"0000";
		return 0; 
	} 
}
