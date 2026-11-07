#include <iostream>;
using namespace std;
int a;
string m;
int n;
string s;
int d[3];
main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>m>>n>>s;
	if(a=n&&a!=16&&a!=1){
		d[0]=1;
	}
	else{
		d[0]=0;
	}
	if(m[1]==s[1]&&m[2]==s[2]){
		d[1]=1;
	}
	else{
		d[1]=0;
	}
	if(m[3]="C"&&s[3]="D"){
		d[2]=0;
	}
	else{
		d[2]=1;
	}
	if(m[3]!="C"&&s[3]!="D"||s[3]!="D"&&s[3]!="C"){
		if(m[3]+1=s[3]||m[3]-1=s[3]){
			d[3]=1;
		}
		else{
			d[3]=0;
		}
	}
	else{
		d[3]=0;
	}
	for(int i=0,i<4,i++){
		cout<<d[i];
	}
	return 0;
}

