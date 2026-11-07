#include<bits/stdc++.h>
using namespace std;
int c1[20],s1[20][5],c2[20],s2[20][5];
int main(){
	freopen("travel.in","r",strin);
	freopen("travel.out","w",strout);
	int a=1;
	int b=2; 
	int c=3;
	int d=4; 
	int e=5;
	for(int i=1; i<=18; i++){
		cin>>c1[i]>>c2[i];
	}
	for(int j=1; j<=18; j++){
		for(int z=1; z<=5; z++){
			cin>>s1[j][z]>>s2[j][z];
		}
	}
	for(int i=1; i<=18; i++){
		for(int j=1; j<=18; j++){
			for(int z=1; z<=5; z++){
				if(c1[i]==c2[i]){
					if(s1[j]==s2[j]){	
						cout<<"1100";
					}else{
						cout<<"1000";
						return 0;
					}
				}else{
					cout<<"0000";
					return 0;
				}
			}
		}
	}
	
	return 0;
}
