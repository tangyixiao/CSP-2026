#include<bits/stdc++.h>
using namespace std;

int c1,c2;
string s1,s2;
int zuo1=0,zuo2=0;
char hao1,hao2;

void init(){
	cin>>c1>>s1>>c2>>s2;
	int i;
	zuo1=(s1[0]-48)*10+(s1[1]-48);
	zuo2=(s2[0]-48)*10+(s2[1]-48);
	hao1=s1[2];
	hao2=s2[2];
}

void qyj(){
	if(c1==c2){
		cout<<1;
		if(zuo1==zuo2){
			cout<<1;
			if(hao1>='A' and hao1<='C'){
				if(hao2>='A' and hao2<='C'){
					cout<<1;
					if(hao1=='A' or hao2=='A'){
						if(hao1=='C' or hao2=='C'){
							cout<<0;
						}else{
							cout<<1;
						}
					}else{
						cout<<1;
					}
				}else{
					cout<<"00";
				}
			}else{
				if(hao2=='D' or hao2=='F'){
					cout<<11;
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	init();
	qyj();
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 
