#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[2],a1[3],b[2],b1[3];
	cin>>a>>a1>>b>>b1;
	int c=0;
	for(int i=0;i<2;i++){
		if(a[i]==b[i]){
			c++;
		}
	}
	if(c==2){
		cout<<1;
	}else{
		cout<<0;
	}
	c=0;
	for(int i=0;i<2;i++){
		if(a1[i]==b1[i]){
			c++;
		}
	}
	if(c==2){
		cout<<1;
	}else{
		cout<<0;
	}
	c=0;
	for(int i=0;i<2;i++){
		if(a1[i]==b1[i]){
			c++;
		}
		int f=a1[2],g=b1[2];
		if((f<='C'&&g<='C')||(f>='D'&&g>='D')){
			c++;
		}
	}
	if(c==4){
		cout<<1;
	}else{
		cout<<0;
	}
	c=0;
	if(a1[2]+1==b1[2]&&a1[2]!='C'||a1[2]-1==b1[2]&&a1[2]!='D'){
		cout<<1;
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
