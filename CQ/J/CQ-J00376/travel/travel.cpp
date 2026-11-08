#include <bits/stdc++.h>
using namespace std;

int main(){
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
	char r[2],x[2];
    cin>>r[0]>>r[1]>>x[0]>>x[1];
    if(r[0]==x[0]){
    	if(r[1]/10==x[1]/10){
    		if(r[1]%10==x[1]%10+1 || r[1]%10==x[1]%10-1){
    			if(r[1]%10=='A'&& x[1]%10=='B' || r[1]%10=='B'&& x[1]%10=='C' || r[1]%10=='D'&& x[1]%10=='E'     ||     x[1]%10=='A'&& r[1]%10=='B' || x[1]%10=='B'&& r[1]%10=='C' || x[1]%10=='D'&& r[1]%10=='E'){
    				cout<<"1111"<<endl;
				}
				else{
					cout<<"1100"<<endl;
				}
			}else{
				cout<<"1000"<<endl;
			}
		}
		else{
			cout<<"0000"<<endl;
		}
	}
	return 0;
} 
