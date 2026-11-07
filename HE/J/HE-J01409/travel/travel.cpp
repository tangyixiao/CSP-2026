#include<bits/stdc++.h>
using namespace std;
string s,a,b,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	cin>>s>>a>>b>>c;
	if(s!=b){
		cout<<"0000"; 
	}
	else{
		cout<<1;
		string q=a.substr(0,2),w=c.substr(0,2);
		if(q==w){
			cout<<1;
			if((a[2]<'D'&&c[2]<'D')||(a[2]>='D'&&c[2]>='D')){
				cout<<1;
				if(abs(a[2]-c[2])==1&&a[2]<='E'&&c[2]<='E'){
					cout<<1;
				}
				else cout<<0;
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	return 0;
}
