#include<bits/stdc++.h>
using namespace std;
char a[2],s[3],d[2],f[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>d>>f;
	if(a[1]==d[1]&&a[0]==d[0]){
		printf("1");
	}else{
		printf("0");
	}
	if(a[1]==d[1]&&a[0]==d[0]&&s[0]==f[0]&&s[1]==f[1]){
		printf("1");
	}else{
		printf("0");
	}
	int as=-1;
	int df=-1;
	if(s[2]=='A'||s[2]=='B'||s[2]=='C'){
		as=1;
	}else{
		as=0;
	}
	if(f[2]=='A'||f[2]=='B'||f[2]=='C'){
		df=1;
	}else{
		df=0;
	}
	if(a[1]==d[1]&&a[0]==d[0]&&s[0]==f[0]&&s[1]==f[1]&&as==df){
		printf("1");
	}else{
		printf("0");
	}
	int is=0;
	if((int(s[2])+1==int(f[2])||int(s[2])-1==int(f[2]))&&as==df&&a[1]==d[1]&&a[0]==d[0]&&s[0]==f[0]&&s[1]==f[1]){
		is=1;
	}else{
		is=0;
	}
	if(is){
		printf("1");
	}else{
		printf("0");
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}