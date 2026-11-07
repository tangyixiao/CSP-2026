#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    int a1,b1,a2,b2;
    a1=10*(c1[0]-48)+c1[1]-48;
    b1=10*(s1[0]-48)+s1[1]-48;
    a2=10*(c2[0]-48)+c2[1]-48;
    b2=10*(s2[0]-48)+s2[1]-48;
    if(a1==a2){
    	cout<<"1";
		if(b1==b2){
		    cout<<"1";
			if((s1[2]>'C'&&s2[2]<='C')||(s2[2]>'C'&&s1[2]<='C')){
		        cout<<"00";
	        }else{
		        cout<<1;
		        int p=abs(s1[2]-s2[2]);
		        if(p==1){
			        cout<<"1";
		        }else{
		            cout<<"0";
		        }
	        }
	    }else{
		    cout<<"000";
	    }
	}else{
		cout<<"0000";
	}
	return 0;
}