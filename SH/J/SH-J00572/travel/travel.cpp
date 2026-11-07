#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		int book=0;
		for(int i=0;i<2;i++){
			if(a2[i]!=b2[i]){
				book=1;
			}
		}
		if(book==0){
			int book1=0;
			if(a2[2]=='A' || a2[2]=='B' || a2[2]=='C'){
				if(b2[2]=='A' || b2[2]=='B' || b2[2]=='C'){
					book1=1;
				}
			}else if(a2[2]=='D' || a2[2]=='F'){
				if(b2[2]=='D' || b2[2]=='F'){
					book1=1;
				}
			}
			if(book1==1){
				int book2=0;
				if((a2[2]=='A'&&b2[2]=='B')||(a2[2]=='B'&&b2[2]=='A')){
					book2=1;
				}else if((a2[2]=='B'&&b2[2]=='C')||(a2[2]=='C'&&b2[2]=='B')){
					book2=1; 
				}else if((a2[2]=='D'&&b2[2]=='F')||(a2[2]=='F'&&b2[2]=='D')){
					book2=1;
				}
				if(book2==1){
					cout<<"1111";
				}else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}
