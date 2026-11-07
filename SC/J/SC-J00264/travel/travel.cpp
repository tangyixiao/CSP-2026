#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '/n'
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[10],b[10];
	char c[10],d[10];
    cin>>a[1]>>a[2]>>b[1]>>b[2]>>b[3]>>c[1]>>c[2]>>d[1]>>d[2]>>d[3];
    if(a[2]==c[2]){
    	cout<<1;
    	if(b[2]==d[2]){
    		cout<<1;
    		if((b[3]=='A'&&d[3]=='B')||(b[3]=='A'&&d[3]=='C')||(b[3]=='B'&&d[3]=='A')||(b[3]=='B'&&d[3]=='C')||(b[3]=='C'&&d[3]=='A')||(b[3]=='C'&&d[3]=='B')||(b[3]=='D'&&d[3]=='F')||(b[3]=='F'&&d[3]=='D')){
    			cout<<1;
    			if((b[3]=='A'&&d[3]=='B')||(b[3]=='B'&&d[3]=='A')||(b[3]=='B'&&d[3]=='C')||(b[3]=='D'&&d[3]=='F')||(b[3]=='F'&&d[3]=='D')||(b[3]=='C'&&d[3]=='B')){
    				cout<<1;
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