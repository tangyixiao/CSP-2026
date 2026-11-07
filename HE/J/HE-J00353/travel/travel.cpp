#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in",'r',stdin);
	freopen("travel.out",'w',stdout);
	int a,b;
	string m,n;
	cin >> a >> m >> b >> n;
	if(a==b){
		cout << 1;
		if(m[1]==n[1] && m[0]==n[0]){
			cout << 1;
			if((m[2]<='C' && n[2]<='C') || (m[2]>='D' && n[2]>='D')){
				cout << 1;
			} else{
				cout << 0;
			}
		}else{
			cout << 0 << 0;
		}
		if(m[2]=='C' || m[2]=='D'){
			if((m[2]=='C' && n[2]=='D') || (m[2]=='D' && n[2]=='C')){
				cout << 0;
			} else{
				cout << 1;
			}
		} else{
			if(m[2]+1==n[2] || m[2]-1==n[2]){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
	} else{
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}
