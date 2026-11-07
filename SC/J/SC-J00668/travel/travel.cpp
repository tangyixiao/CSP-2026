#include<bits/stdc++.h>
using namespace std;
int n,m,k,l,o,p=0;
string a,b;
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.in","w",stdout);
	cin>>n>>a>>m>>b;
	if(n==m){
		k==1;
		int c=(a[0]-'0')*10+a[1]-'0',d=(b[0]-'0')*10+b[1]-'0';
		if(c==d){
			l==1;
			char g=a[2],h=b[2];
			if(g<='C'&&h<='C'||g>='D'&&h>='D'){
				o=1;
				if(((g=='A'&&h=='B')||((g=='B'&&h=='C')||(g=='D'&&h=='F')))||((g=='B'&&h=='A')||((g=='C'&&h=='B')||(g=='F'&&h=='D')))){
					p=1;
					cout<<"1111"<<endl;
					return 0;
				}else{
					cout<<"1110"<<endl;
					return 0;
				}
			}else{
				cout<<"1100"<<endl;
				return 0;
			}
		}else{
			cout<<"1000"<<endl;
			return 0;
		}
	}else{
		cout<<"0000"<<endl;
	}
	return 0;
}