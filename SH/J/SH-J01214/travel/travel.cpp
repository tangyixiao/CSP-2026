#include<bits/stdc++.h> 
using namespace std;
char c1[5],c2[5],s1[5],s2[5];
bool f,f2,f3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1[1]>>c1[2]>>s1[1]>>s1[2]>>s1[3];
	cin>>c2[1]>>c2[2]>>s2[1]>>s2[2]>>s2[3];
	if(c1[1]==c2[1]&&c1[2]==c2[2]){
		cout<<1;
		f=1;
	}
	else cout<<0;
	if(f&&s1[1]==s2[1]&&s1[2]==s2[2]){
		cout<<1;
		f2=1;
	}
	else cout<<0;
	if(!f2||s1[3]>='D'&&s2[3]<'D'||s2[3]>='D'&&s1[3]<'D'){
		cout<<0;
	}
	else{
		cout<<1;
		f3=1;
	}
	if(f3&&s1[3]-s2[3]==1||f3&&s2[3]-s1[3]==1){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
