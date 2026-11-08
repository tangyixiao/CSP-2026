#include<bits/stdc++.h>
using namespace std;
string a,b;
char x[5],y[5];
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdon);
	cin>>a;
	for(int i=0;i<3;i++){
		cin>>x[i];
	}
	cin>>b;
	for(int i=0;i<3;i++){
		cin>>y[i];
	}
	if(a==b) cout<<1;
	else cout<<0;
	if(x[0]==y[0]&&x[1]==y[1]) cout<<1;
	else cout<<0;
	int u,v;
	if(x[2]<='C') v=1;
	else v=0;
	if(y[2]<='C') u=1;
	else u=0;
	if(u==v) cout<<1;
	else cout<<0;
	if(a==b&&x[0]==y[0]&&x[1]==y[1]&&u==v){
		if(x[2]+1==y[2]||x[2]-1==y[2]){
			cout<<1;
		}else{cout<<0;
		return 0;
		}
	}else cout<<0;
	return 0;
	
}

