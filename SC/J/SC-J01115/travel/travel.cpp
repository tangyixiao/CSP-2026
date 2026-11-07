#include<bits/stdc++.h> 
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int p[4]={0};
	cin>>a>>b>>c>>d;
	if(a==c){
		p[0]=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			p[1]=1;
			if(b[2]<='C'&&d[2]<='C'){
				p[2]=1;
				if(b[2]-d[2]==1||d[2]-b[2]==1){
					p[3]=1;
				}
			}else if(b[2]>'C'&&d[2]>'C'){
				p[2]=1;
				p[3]=1;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<p[i];
	}
	return 0;
}