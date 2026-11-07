#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	int n=(b[0]-'0')*10+(b[1]-'0');
	int m=(d[0]-'0')*10+(d[1]-'0');
	int x=b[2]-'A';
	int y=d[2]-'A';
	if(a==c){
		cout<<1;
		if(n==m){
			cout<<1;
			if((x<=2&&y<=2)||((x==3||x==4)&&(y==3||y==4))){
				cout<<1;
				if(abs(x-y)==1){
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
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
} 
