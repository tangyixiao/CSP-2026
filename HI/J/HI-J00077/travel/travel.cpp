#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    getline(cin,a,' ');getline(cin,b,' ');getline(cin,c,' ');getline(cin,d);
    if(a==c){
    	cout<<1;
    	n=b[0]*10+b[1];
    	m=d[0]*10+d[1];
    	if(n==m){
    		cout<<1;
    		if(b[2]=='A'||b[2]=='B'||b[2]=='C') n=1;
    		else n=0;
    		if(d[2]=='A'||d[2]=='B'||d[2]=='C') m=1;
    		else m=0;
    		if(n==m){
    			cout<<1;
    			if(b[2]-d[2]==1||b[2]-d[2]==-1){
    				cout<<1;
				}else cout<<0;
			}else cout<<0<<0;
		}else cout<<0<<0<<0;
	}else cout<<0<<0<<0<<0;
	return 0;
}
