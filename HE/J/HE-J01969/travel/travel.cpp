#include<bits/stdc++.h>
using namespace std;
int a[20],b[20];
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string s;
	for(int i=0;i<2;i++){
		cin>>a[i]>>b[i]>>s[i];
	}
	int c1=0,c2=0,c3=0,c4=0;
	for(int i=0;i<2;i++){
		if(a[i]==a[i+1]){
			c1=1;
		}else{
		if(b[i]==b[i+1]){
			c2=1;
		}else{	
		if(s[i]=='A'&&s[i+1]=='B'||s[i]=='B'&&s[i+1]=='C'||s[i]=='D'&&s[i+1]=='F'||s[i]=='B'&&s[i+1]=='A'||s[i]=='C'&&s[i+1]=='B'||s[i]=='F'&&s[i+1]=='D'||s[i]=='A'&&s[i+1]=='C'||s[i]=='C'&&s[i+1]=='A'){
			c3=1;
			
		}else{
		
		if(b[i]==b[i+1]&&s[i]=='A'&&s[i+1]=='B'||s[i]=='B'&&s[i+1]=='C'||s[i]=='D'&&s[i+1]=='F'||s[i]=='B'&&s[i+1]=='A'||s[i]=='C'&&s[i+1]=='B'||s[i]=='F'&&s[i+1]=='D'){
			c4=1;	
		}
		}
		}
		}
	}
	cout<<c1<<c2<<c3<<c4;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
