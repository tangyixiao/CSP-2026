#include<bits/stdc++.h>
using namespace std;
string b,d;
int a,c,n,m,cnt=0,ans=0;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(b[2]=='D'||b[2]=='F'){
		n=1;
	}
	if(d[2]=='D'||d[2]=='F'){
		m=1;
	}
	if(n==m){
		cnt=1;
		ans++;
	}
	if(a==c){
		cout<<"1";
		if(b[0]==d[0]){
			if(b[1]==d[1]){
				cout<<"1";
				ans++;
			}else{
				cout<<"0";
			}
		}else{
			cout<<"0";
		}
		if(cnt==1&ans==2){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if(ans==2){
			if(b[2]+1==d[2]||b[2]-1==d[2]){
				cout<<"1";
			}else{
				if(n==1&m==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
				
			}
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0000";
		
	}

	
	return 0;
}

