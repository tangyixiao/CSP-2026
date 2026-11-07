#include<iostream>
#include<algorithm>
using namespace std;

freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);

int main(){
	int cnt=0;
	char ca[5],sa[5],cb[5],sb[5];
	for(int i=0;i<=1;i++){
		cin>>ca[i];
	}
	for(int i=0;i<=2;i++){
		cin>>sa[i];
	}
	for(int i=0;i<=1;i++){
		cin>>cb[i];
	}
	for(int i=0;i<=2;i++){
		cin>>sb[i];
	}
	if(ca[0]==cb[0]&&ca[1]==cb[1]){
		cout<<"1";
		cnt++;
		if(sa[0]==sb[0]&&sa[1]==sb[1]){
			cout<<"1";
			cnt++;
			if((sa[2]=='A'||sa[2]=='B'||sa[2]=='C')&&(sb[2]=='A'||sb[2]=='B'||sb[2]=='C')||(sa[2]=='D'||sa[2]=='F')&&(sb[2]=='D'||sb[2]=='F')){
				cout<<"1";
				cnt++;
				if(abs(sa[2]-sb[2])==1){
					cout<<"1";
					cnt++;
				}
			}
		}
	}
	for(int i=cnt;i<4;i++){
		cout<<"0";
	}
	return 0;
} 