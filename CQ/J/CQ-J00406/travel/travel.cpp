#include <bits/stdc++.h>
using namespace std;
string a,b;
int n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>a>>m>>b;
	if(n==m){
		cout<<1;
		if(a[0]==b[0]&&a[1]==b[1]){
			cout<<1;
			if((a[2]>='A'&&a[2]<='C'&&b[2]>='A'&&b[2]<='C')||(a[2]>='D'&&a[2]<='F'&&b[2]>='D'&&b[2]<='F')){
				cout<<1;
				if(a[2]+1==b[2]){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
				return 0;
			} 
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
