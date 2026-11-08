#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("tr.in","r",stdin);
	freopen(".out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]==d[0] and b[1]==d[1]){
			cout<<1;
			if(b[2]=='A' or b[2]=='B' or b[2]=='C'){
				if(d[2]=='A' or d[2]=='B' or d[2]=='C'){
					cout<<1;
					if(b[2]=='B' or d[2]=='B'){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<0<<0;
				}
			}
			else{
				if(d[2]=='F' or d[2]=='D'){
					cout<<1<<1;
				}
				else{
					cout<<0<<0;
				}	
			}
		}
		else{
			cout<<0<<0<<0; 
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	
	return 0;
}


