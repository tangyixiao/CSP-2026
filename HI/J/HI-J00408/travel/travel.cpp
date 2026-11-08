#include<bits/stdc++.h>
using namespace std;
int n[2],o[2];
char x[1001],z[2];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c=0,m=0;
    string s;
	for(int i=0;i<2;i++){
		cin>>n[i]>>s;
		for(int j=0;j<3;j++){
			if('0'<=s[j]&&s[j]<='9'){
				x[m]=s[j];
				m++;
			}else{
				z[c]=s[j];
				c++;
			}
		}
	}
	if(n[0]==n[1]){
		cout<<1;
	}else{
		for(int i=0;i<4;i++){
			cout<<0;
		}
		return 0;
	}
    if(x[0]==x[2]&&x[1]==x[3]){
    	cout<<1;
	}else{
		for(int i=1;i<4;i++){
			cout<<0;
		}
		return 0;
	}
	int l=-1;

	 //o[0]=(x[0]-'0')*10+(x[1]-'0');
	 //o[1]=(x[2]-'0')*10+(x[3]-'0');

	if(x[0]=='0'){
	
	for(int i='2';i<='10';i++){
		if(x[1]==i){
			l++;
			break;
	}
   }
   }
    if(x[0]=='1'){
    	for(int i='1';i<='7';i++){
    		if(x[1]==i){
    		l++;
    		break;
    	}
		}
	}

    
    if(l==-1){
    
    	cout<<1;
	}
	
	}else{
		for(int i=2;i<4;i++){
			cout<<0;
		}
		return 0;
	}
   	if(z[0]+1==z[1]||z[0]-1==z[1]){
   		cout<<1;
   		return 0;
	   }
	if(z[1]+1==z[0]||z[1]-1==z[0]){
		cout<<1;
		return 0;
	}
	cout<<0; 
	return 0;
}

