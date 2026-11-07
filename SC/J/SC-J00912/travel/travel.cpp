//输入后简单分支 
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
string x,y,a,b;
char l,r;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>a>>b;
	if(x==a){
		cout<<1;
		if(y[0]==b[0]&&y[1]==b[1]){
			cout<<1;
			l=y[2];
			r=b[2];
			if(l>='A'&&l<='C'){
				if(r>='A'&&r<='C'){
					cout<<1;
					if(r==char(int(l)+1)||r==char(int(l)-1))cout<<1;
					else cout<<"0";
				}
				else cout<<"00";
			}
			if(l>='D'&&l<='F'&&l!='E'){
				if(r>='D'&&r<='F'&&r!='E'){
					cout<<1;
					if(r==char(int(l)+1)||r==char(int(l)-1))cout<<1;
					else cout<<"0";
				}
				else cout<<"00";
			}
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 