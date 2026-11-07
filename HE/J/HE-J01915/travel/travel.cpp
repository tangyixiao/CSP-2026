#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
  freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
    	cout<<"1";
	}
	else cout<<"0";
	for(int j=1;j<2;j++){
		if(s1[j]==s2[j]){
    	cout<<"1";
	    }
	    else cout<<"0";
	}
	for(int i=2;i<3;i++){
		if(s2[i]+"0"+1==s1[i]+"0"||s2[i]+"0"-1==s1[i]+"0"){
			cout<<"1";
		}
		else cout<<"0";
	}
	for(int i=2;i<3;i++){
		if(s1[i]=='A'||s1[i]=='B'||s1[i]=='C'){
			if(s2[i]+"0"+1==s1[i]+"0"||s2[i]+"0"-1==s1[i]+"0"){
				cout<<"1";
			}
			else cout<<"0";
		}
		else cout<<"0";
	}
	return 0;
} 
