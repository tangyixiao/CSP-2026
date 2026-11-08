#include<bits/stdc++.h>
using namespace std;
int c,cb,f=4;
char a[10];
char b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c;
	for(int i=0;i<3;i++){
		cin>>a[i];
	} 
	cin>>cb;
	for(int i=0;i<3;i++){
		cin>>b[i];
	} 
	if(c==cb){
		f=3;
		cout<<1;
	}
	if(f==3 and a[1]==b[1] and a[0]==b[0]){
		f=2;
		cout<<1;
	}
	if(f==2 and ((a[2]<='C' and b[2]<='C') or(a[2]<='F' and a[2]>='D' and b[2]<='F' and b[2]>='D'))){
		f=1;
		cout<<1;
	}
	if(f==1 and abs((int)a[2]-b[2])==1){
		f=0;
		cout<<1;
	}
	for(int i=1;i<=f;i++){
		cout<<0;
	}
	return 0;
}
	
	
	

