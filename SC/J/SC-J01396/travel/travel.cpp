#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	bool f=false,ff=false,fp=false;;
	if(c==cc){
		cout<<1;
		f=true;
	}
	else{
		cout<<0;
	}
	if(f&&s[0]==ss[0]&&s[1]==ss[1]){
		cout<<1;
		ff=true;
	}
	else{
		cout<<0;
	}
	int viss=1,visc=1;
	if('A'<=s[2]&&s[2]<='C'){
		viss=0;
	}
	if('A'<=ss[2]&&ss[2]<='C'){
		visc=0;
	}
	if(ff&&viss==visc){
		cout<<1;
		fp=true;
	}
	else{
		cout<<0;
	}
	if(fp){
		if((viss==1&&abs((s[2]-'A')-(ss[2]-'A'))==2)||(viss==0&&abs((s[2]-'A')-(ss[2]-'A'))==1)){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
}

//:>