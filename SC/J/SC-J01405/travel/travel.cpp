#include<iostream>
using namespace std;
char c1[2],s1[3],c2[2],s2[3];
bool a[4];
int main(){
	for(int i=0;i<4;i++){
		a[i]=0;
	}
	for(int i=0;i<2;i++){
		cin>>c1[i];
	}
	for(int i=0;i<3;i++){
		cin>>s1[i];
	}
	for(int i=0;i<2;i++){
		cin>>c2[i];
	}
	for(int i=0;i<3;i++){
		cin>>s2[i];
	}	
	int o=max(int(s1[2]),int(s2[2]));
	int p=min(int(s1[2]),int(s2[2]));
	if(c1[0]+c1[1]==c2[0]+c2[1]){
		cout<<1<<endl;
		if(s1[0]+s1[1]==s2[0]+s2[1]){
			cout<<1<<endl;
			if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>'C'&&s2[2]>'C')){
				cout<<1<<endl;
				if(o-p==1){
					cout<<1<<endl;
					return 0;
				}
				else{
					cout<<0<<endl;
					return 0; 
				}
			}
			for(int i=0;i<2;i++){
				cout<<0<<endl;
			}
			return 0;
		}
		for(int i=0;i<3;i++){
			cout<<0<<endl;
		}
		return 0;
	}
	else{
		for(int i=0;i<4;i++){
			cout<<0<<endl;
		}
		return 0;
	}
}