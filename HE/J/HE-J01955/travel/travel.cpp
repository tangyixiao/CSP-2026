#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>b>>c>>d;
	if(a[0]!=c[0]||a[1]!=c[1]){
		cout<<"0000";
		return 0;
	}
	if(a[0]==c[0]&&a[1]==c[1]){
    	cout<<"1";
        if(b[0]!=d[0]||b[1]!=d[1]){
        	cout<<"000";
        	return 0;
		}
        if(b[0]==d[0]&&b[1]==d[1]){
        	cout<<"1";
        	if(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F'))){
		    	cout<<"1";
		    	if(b[2]==d[2]+1||b[2]==d[2]-1)
		    	cout<<"1";
		    	else
		    	cout<<"0";
			}
		    else{
		    	cout<<"00";
		    	return 0;
			}
		}
    }
    return 0;
} 
