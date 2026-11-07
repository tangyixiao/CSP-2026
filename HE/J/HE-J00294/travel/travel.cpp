#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>s1>>s2;
	if(c1[0]==s1[0]&&c1[1]==s1[1]){
		cout<<1;
		f2=1;
	}else{
		cout<<0;
	}
	if(f2==1&&c2[0]==s2[0]&&c2[1]==s2[1]){
		cout<<1;
		f3=1;
	}else{
		cout<<0; 
	}
	if(f3==1&&((c2[2]<='C'&&s2[2]<='C')||(c2[2]>'C'&&s2[2]>'C'))){
		cout<<1;
		f4=1;
	}else{
		cout<<0;
	}
	if(f4&&(c2[2]-1==s2[2]||c2[2]+1==s2[2])){
		cout<<1;
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
