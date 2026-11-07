#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
	cout<<"0000";
	return 0;
	}
	char x=s1[0];
	char y=s1[1];
	char x1=s2[0];
	char y1=s2[1];
	char z=s1[2];
	char z1=s2[2];
	if(x==x1&&y==y1){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(z=='A'||z=='B'||z=='C'){
		if(z1=='A'||z1=='B'||z1=='C'){
			cout<<1;
			if(z=='A'){
				if(z1=='B'){
					cout<<1;
					return 0;
				}else{
					cout<<0;
					return 0;
				}
			}else if(z=='C'){
				if(z1=='B'){
					cout<<1;
					return 0;
				}else{
					cout<<0;
					return 0;
				}
			}else{
				cout<<0;
				return 0;
			}
		}else{
			cout<<"00";
			return 0;
		}
	}else if(z=='E'||z=='D'){
		if(z1=='E'||z1=='D'){
			cout<<"11";
		}else{
			cout<<"00";
			return 0;
		}
	}
}