#include<bits/stdc++.h>
using namespace std;
int a,b,x,y;
char c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>c>>b>>y>>d;
	if(a==b){
		cout<<1;
		if(x==y){
			cout<<1;
			if((c<='C'&&d<='C')||(c>='D'&&d>='D')){
				cout<<1;
				if(c+1==d||c-1==d){
					cout<<1;
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
