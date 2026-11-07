#include<bits/stdc++.h>
using namespace std;
int main(){//sjy
	freopen("travel.in","r",stdin);												
	freopen("travel.out","w",stdout);
	int c1,c2,a,b;
	int c,d;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	a=(s1[0]-'0')*10+(s1[1]-'0');
	b=(s2[0]-'0')*10+(s2[1]-'0');
	c=s1[2]-'A';
	d=s2[2]-'A';
	if(c1==c2){
		cout<<1;
		if(a==b){
			cout<<1;
			if(c<=2&&c>=0 && d<=2&&d>=0){
				cout<<1;
				if(c+1==d || c-1==d){
					cout<<1;
				}
			}	
			else if(c>=3 && c<=6 && d<=5 && d>=3){
				cout<<1;
				if(c+2==d || c-2==d){
					cout<<1;
				}
			}
			else cout<<"00";
																																				
		}
		else cout<<"000";
	}																			
	else cout<<"0000";
	
}
