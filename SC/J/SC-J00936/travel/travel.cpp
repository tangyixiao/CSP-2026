#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int sum1=0,sum2=0;
	for(int i=0;i<s1.size();i++){
		sum1=sum1*10+int(s1[i]-'0');
	}
	for(int i=0;i<s3.size();i++){
		sum2=sum2*10+int(s3[i]-'0');
	}
	if(sum1==sum2){
		cout<<1;
	}else{
		cout<<"0000"<<endl;
		return 0;
	}
	int r1=0,x1=0;
	char r2=s2[2],x2=s4[2];
	for(int i=0;i<2;i++){
		r1=r1*10+int(s2[i]-'0');
	}
	for(int i=0;i<2;i++){
		x1=x1*10+int(s4[i]-'0');
	}
	if(r1==x1){
		cout<<1;
	}else{
		cout<<0;
	}
	if(x1==r1&&((r2<'D'&&x2<'D')||(r2>'C'&&x2>'C'))){
		cout<<1;
	}else{
	    cout<<0;
	}
	if(x1==r1&&abs(int(r2)-int(x2))==1&&((r2!='D'&&x2!='C')&&(r2!='C'&&x2!='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}