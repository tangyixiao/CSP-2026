#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
    cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
		   if((d[2]!='c'||b[2]!='d')&&(d[2]!='d'||b[2]!='c')){
		   	  cout<<1;
		   	    if(d[2]-1==b[2]||b[2]-1==d[2]){
		   	  	  cout<<1;				
				}
				else cout<<"0";
		   }
           else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
