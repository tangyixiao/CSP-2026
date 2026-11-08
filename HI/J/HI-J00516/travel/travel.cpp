#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d,e;
	cin>>a>>b>>c>>d;
	if(a==c){
		e[1]=1;
	    if(b[0]==d[0]&&b[1]==d[1]){
		    e[2]=1;
		    if(b[2]=='C'||d[2]=='D'&&b[2]=='D'||d[2]=='C'){
		        e[3]=1;
	        }else{
		        e[3]=0;
	        }
	        if(b[2]=(d[2]+1)||(d[2]-1)&&b[2]!='C'&&d[2]!='D'){
	        	e[4]=1;
			}else{
				e[4]=0;
			}
	    }else{
		    e[2]=0;
		    e[3]=0;
	    	e[4]=0;
	    }
    }else{
		e[1]=0;
		e[2]=0;
		e[3]=0;
		e[4]=0;
    }
    int z=e[1];
    int x=e[2];
    int g=e[3];
    int k=e[4];
    cout<<z<<x<<g<<k;
	return 0;
}
