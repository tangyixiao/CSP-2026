#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel1.in","r",stdin);
	freopen("travel.out","w",stdout);
    string a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    if(a1==b1){
        cout<<1;
        if(b2[0]==a2[0]&&b2[1]==a2[1]){
        	cout<<1;
        	if(a2[2]=='A'||a2[2]=='B'||a2[2]=='C'){
            	if(b2[2]=='A'||b2[2]=='B'||b2[2]=='C'){
            		cout<<1;
            		if(max(a2[2],b2[2])-min(a2[2],b2[2])==1){
            			cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<0;
					cout<<0;
				}
            }
            else if(b2[2]=='D'||b2[2]=='F'){
            	cout<<1;
            	if(max(a2[2],b2[2])-min(a2[2],b2[2])==1){
            		cout<<1;
				}
				else{
    				cout<<0;
				}
			}
			else{
				cout<<0;
				cout<<0;
			}
        }
        else{
        	cout<<0;
        	cout<<0;
        	cout<<0;
		}
    }
    else{
        cout<<0;
        cout<<0;
        cout<<0;
        cout<<0;
    }
    return 0 ;
}