#include <bits/stdc++.h>;
#include <cstring>;
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,y=0,z=0;
	char s,h;
	cin>>a;
	char x[100]={0};
	for(int i=0;i<a;i++){
		int b;
		char c;
		cin>>b>>c;
		for(int j=z;j<z+b;j++){
			s+=c;
			x[j]=c;
		}
		z+=b;
	}
	int m=strlen(x);
	for(int i=m-1;i>=0;i--){
		h+=x[i];
	}
	if(h==s){
		cout<<"0";
	}
	for(int i=0;i<m;i++){
		if(x[i]!=x[m-i]){
			x[i]=x[m-i];
			y++;
		}
		if(h==s){
			cout<<y;
		}
	}
 	fclose(stdin);
 	fclose(stdout);
	return 0;
}



























