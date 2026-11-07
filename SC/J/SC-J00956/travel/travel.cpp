#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
    else{
    	cout<<1;
    	for(int i=1;i<=18;i++){
    		if((int)s1[i]==(int)s2[i]){
    			cout<<1;
    			break;
			}
    		
		}
		for(int i=1;i<=18;i++){
			if((int)s1[i]-int(s2[i])>=3||(int)s1[i]-(int)s2[i]>=3){
			    cout<<0;
			    break;
			}
			else{
				if(s1[i]-0-1-i=='C'){
					cout<<0;
					break;
				}
				else{
					cout<<1;
					break;
				}
			}
		}
		
    	for(int i=1;i<=18;i++){
    		if(s1[i]==s2[i]+1||s1[i]==s2[i]+1){
			    cout<<1;
			    break;
			}
			else{
			    cout<<0;
			    break;
			}
    		
        }
    }
} 
