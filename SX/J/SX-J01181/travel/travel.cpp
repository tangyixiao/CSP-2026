#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    char s[7];
    char g[3];
    int a1,a2,f=0;
    cin>>a1;
    for(int i=0;i<3;i++) cin>>s[i];
    cin>>a2;
    for(int i=0;i<3;i++) cin>>g[i];
    s[4]='B';
    s[5]='C';
    s[6]='D';
	if(a1==a2) {
        cout<<1;
        if(s[0]==g[0]&&s[1]==g[1]){
        	cout<<1;
            if(s[2]==s[4]-1){
            	if(g[2]==s[4]){
	            cout<<11;
	            f=1;
			        }
			    if(g[2]==s[5]){
	            cout<<10;
	            f=1;
				    }
				}
			if(s[2]==s[4]){
            	if(g[2]==s[4]-1||g[2]==s[5]){
	            cout<<11;
	            f=1;
			        }
				}
			if(s[2]==s[5]){
            	if(g[2]==s[4]){
	            cout<<11;
	            f=1;
			        }
			    if(g[2]==s[4]-1){
	            cout<<10;
	            f=1;
				    }
				}
            if(s[2]==s[6]&&g[2]==s[6]+1) {
                cout<<11;
                f=1;
			}
            if(s[2]==s[6]+1&&g[2]==s[6]) {
                cout<<11;
                f=1;
			}
            if(f==0) cout<<"00";
        }
	    else cout<<"000";
	}
    else cout<<"0000";
	return 0;
}