#include<bits/stdc++.h>
using namespace std;
string a,b,c,d; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int s1=0;
	for(int i=0;i<2;i++){
		if(a[i]!=c[i]){
			s1=1;
		}
	}
	if(s1==1){
		cout<<"0";
	}else{
		cout<<"1";
	}
	int s2=0;
	for(int i=0;i<2;i++){
		if(b[i]!=d[i]){
			s2=1;
		}
	}
	if(s2==0&&s1==0){
		cout<<"1";
	}else{
		cout<<"0";
	}
	int s3=0;
	if(s1==0&&s2==0&&(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F')){
		cout<<"1"; 
	}else{
		cout<<"0";
	}
	if(s1==0&&s2==0&&((b[2]-d[2]==1&&b[2]!='D')||(d[2]-b[2]==1&&d[2]!='D'))){
		cout<<"1";
	}else{
		cout<<"0";
	} 
	return 0;
}