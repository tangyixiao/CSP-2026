#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c){
    	cout<<"1";
    	if(b[0]==d[0]&&b[1]==d[1]){
    		cout<<"1";
    		int sum1,sum2;
    		if(b[2]=='D'||b[2]=='F') sum1=1;
    		else sum1=0;
    		if(d[2]=='D'||d[2]=='F') sum2=1;
    		else sum2=0;
    		if(sum1==sum2){
    			cout<<"1";
    			if(abs(int(b[2]-d[2]))==1){
    				cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00"; 
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}

