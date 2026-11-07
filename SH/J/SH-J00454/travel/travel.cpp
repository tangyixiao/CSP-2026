#include <iostream>
#include <cstdio>
using namespace std;
string a,b,c,d;
int f[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0] && a[1]==c[1]){
		f[1]=1;
		if(b[0]==d[0] && b[1]==d[1]){
			f[2]=1;
			if(b[2]=='F' && d[2]=='D'){
				f[3]=1;
				f[4]=1;
			}
			else if(b[2]=='D' && d[2]=='F'){
				f[3]=1;
				f[4]=1;
			}
			else if(b[2]=='A' && d[2]=='B'){
				f[3]=1;
				f[4]=1;
			}
			else if(b[2]=='B' && d[2]=='A'){
				f[3]=1;
				f[4]=1;
			}
			else if(b[2]=='A' && d[2]=='C'){
				f[3]=1;
			}
			else if(b[2]=='C' && d[2]=='A'){
				f[3]=1;
			}
			else if(b[2]=='B' && d[2]=='C'){
				f[3]=1;
				f[4]=1;
			}
			else if(b[2]=='C' && d[2]=='B'){
				f[3]=1;
				f[4]=1;
			}
		}
	}
	for(int i=1;i<=4;i++){
		cout<<f[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
