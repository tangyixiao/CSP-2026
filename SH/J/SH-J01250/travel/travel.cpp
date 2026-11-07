#include<iostream>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			cout<<1;
			if((s1[2]<68&&s2[2]<68) || (s1[2]>67 && s2[2]>67)){
				cout<<1;
				if(s1[2]-s2[2]==1 || s1[2]-s2[2]==-1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				for(int i=0;i<2;i++){
					cout<<0;
				}
			}
		}else{
			for(int i=0;i<3;i++){
				cout<<0;
			}
		}
	}else{
		for(int i=0;i<4;i++){
			cout<<0;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
