#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
string e,f;
bool check(){
	int g=e[2]-'A',h=f[2]-'A';
	if(g<=2&&h<=2)return true;
	if(g>2&&h>2)return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>e>>b>>f;
	c=(e[0]-'0')*10+(e[1]-'0');
	d=(f[0]-'0')*10+(f[1]-'0');
	if(a==b){
		if(c==d){
			if(check()){
				int k=e[2]-'A',l=f[2]-'A';
				if(abs(k-l)==1){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
