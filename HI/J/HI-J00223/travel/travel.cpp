#include<bits/stdc++.h>
using namespace std;

int main(){
	FILE *input=freopen("travel.in","r",stdin);
	FILE *out=freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int n=1,m=1,a=0,b=0;
	char g=s1[2],h=s2[2];
	for(int i=0;i<c1.length();i++){
		if(c1[i]==c2[i]){
			n+=1;
		}
	}
	for(int j=0;j<s1.length()-1;j++){
		if(s1[j]==s2[j]){
			m+=1;

		}
	}
	if(g>='D'&&h>='D'||g<='C'&&h<='C'){
		a=1;
	}
	if((g!='D'&&h!='C' )&&(h!='D'&&g!='C')){
		if(g!=h){
		
			if(g-h==1||h-g==1 || (g=='D'||g=='F' )&&(h=='D'||h=='F')){
				b=1;
			}
		}
	}
	if(n==3){
		cout<<1;
	}
	else{
		m=0;
		a=0;
		b=0;
		cout<<0;
	}
	if(m==3){
		cout<<1;

	}
	else{
		a=0;
		b=0;
		cout<<0;
	}
	if(a==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(b==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	fclose(input);
	fclose(out);
	return 0;
} 
