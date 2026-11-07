#include<bits/stdc++.h>
using namespace std;

int s1,s2;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>s1>>a>>s2>>b;
	if (s1==s2){
		cout <<1;
		if (a[0]==b[0] && a[1]==b[1]){
			cout <<1;
			if ((a[2]<='C' && b[2]<='C') || (a[2]>='D' && b[2]>='D')){
				cout <<1;
			}
			else{
				cout <<0;
			}
			if ((a[2]<='C' && b[2]<='C') || (a[2]>='D' && b[2]>='D')){
				if (a[2]+1==b[2] || a[2]-1==b[2]){
					cout <<1;
				}
				else{
					cout <<0;
				}
			}
			else{
				cout <<0;
			}
		}
		else{
			cout <<0<<0<<0;
		}
	}
	else{
		cout <<0<<0<<0<<0;
	}
	return 0;
}
