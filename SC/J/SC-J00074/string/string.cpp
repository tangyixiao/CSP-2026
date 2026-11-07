#include<bits/stdc++.h> 
using namespace std;
struct s{
	int c;
	char z;
}zf[300005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; 
	cin>>n;
	long long zc=0,top=1,d=n;
	for(int i=1;i<=n;i++){
		cin>>zf[i].c>>zf[i].z;
		zc+=zf[i].c; 
	}
	long long xc=0,cs=0;
	while(true){
		if(xc>=zc/2){
			cout<<cs;
			return 0;
		}
		if(zf[d].z!=zf[top].z){
			if(zf[d].c>=zf[top].c){
				cs+=zf[top].c;
				xc+=zf[top].c;
				zf[d].c-=zf[top].c;
				top++;
			}else{
				cs+=zf[d].c;
				xc+=zf[d].c;
				zf[top].c-=zf[d].c;
				d--;
			}
		}else{
			if(zf[d].c>=zf[top].c){
				xc+=zf[top].c;
				zf[d].c-=zf[top].c;
				top++;
			}else{
				xc+=zf[d].c;
				zf[top].c-=zf[d].c;
				d--;
			}
		}
	}
}
