#include<bits/stdc++.h>
using namespace std;
int e[6]={0};
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
	long long a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		e[1]=1;
		if(b[1]==d[1]){
			e[2]=1;
			if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'){
				e[3]=1;
				if(b[2]==d[2]+1||b[2]==d[2]-1)e[4]=1;
			}
			if(b[2]>='D'&&b[2]<='E'&&d[2]>='D'&&d[2]<='E'){
			e[3]=1;
			e[4]=1;
		}
		}
	}
	for(int i=1;i<=4;i++)cout<<e[i];
}
	