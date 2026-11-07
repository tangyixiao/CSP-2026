#include<bits/stdc++.h>
using namespace std ;
int a,b;
string x,y; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	if(a==b){
		cout<<1;
		int sumx=(x[0]-'0')*10+x[1]-'0';
		int sumy=(y[0]-'0')*10+y[1]-'0';
		if(sumx==sumy){
			cout<<1;
			char px=x[2];
			char py=y[2];
			if((px<='C'&&py<='C')||(px>='D'&&py>='D')){
				cout<<1;
				if((px==py+1||py==px+1)||((px=='F'&&py=='D')||(px=='D'||py=='F'))){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}

