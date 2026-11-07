#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	string a,m,b,n;
	cin>>a>>m>>b>>n;
	if(a==b){
		cout<<"1";
		if(m[0]==n[0] && m[1]==n[1]){
			cout<<"1";
			if(((m[2]<='A' && m[2]>='C') && (m[2]<='A' && m[2]>='C')) || ((m[2]<='D' && m[2]>='F') && (m[2]<='D' && m[2]>='F'))){
				cout<<"1";
				if(m[2]+1==n[2] || m[2]-1==n[2]){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
