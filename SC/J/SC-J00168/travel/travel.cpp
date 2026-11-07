#include<bits/stdc++.h>
using namespace std;
int  c1,s1,c2,s2;
int a[3],b[3];
bool w=false,v=false,d=false,p=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=1;i<=3;i++){
		a[i]=s1%10;
		s1=s1/10;
	}
	for(int j=1;j<=3;j++){
		b[j]=s2%10;
		s2=s2/10;
	}
	if(c1==c2){
		w=true;
	}else{
		w=false;
	} 
	if(w=1&&a[3]==b[3]&&a[2]==b[2]){
		v=true;
	}else {
		v=false;
	}
	if(v=1&&(a[1]==1&&b[1]==2||b[1]==1&&a[1]==2||a[1]==2&&b[1]==3||a[1]==3&&b[1]==2||a[1]==4&&b[1]==5||a[1]==5&&b[1]==4||a[1]==3&&b[1]==1||a[1]==1&&b[1]==3)){
		d=true;
	}else {
		d=false;
	}
	if(d=1&&(a[1]==1&&b[1]==2||b[1]==1&&a[1]==2||a[1]==2&&b[1]==3||a[1]==3&&b[1]==2||a[1]==4&&b[1]==5||a[1]==5&&b[1]==4)){
		p=true;
	}else {
		p=false;
	}

	cout<<w<<v<<d<<p;
	return 0;
}