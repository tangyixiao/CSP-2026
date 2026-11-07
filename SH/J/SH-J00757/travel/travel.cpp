#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,x,y;
char m,j;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	bool a1=0,a2=0,a3=0,a4=0;
	cin>>a>>b>>c>>d;
	if(a==c){
		a1=1;	
		for(int i=0;i<=1;i++){
			x+=b[i];
			y+=d[i];
		}
		if(x==y){
			a2=1;
			m=b[2];
			j=d[2];
			if(m<j) swap(m,j);
			if(m=='B' && j=='A' || m=='C' && j=='B' || m=='E' && j=='D'){
				a3=1;
				a4=1;
			}
			else if(m=='C' && j=='A') a3=1;
			else;
		}
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
}
