#include<iostream>
#include<string>

using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[5];
	char b[5];
	for (int i=0;i<2;i++){
		for (int j=0;j<5;j++){
			char c;
			cin>>c;
			if (i==0){
				a[j]=c;
			}
			if (i==1){
				b[j]=c;
			}
		}}
	if (a[0]==b[0]&&a[1]==b[1]){
		cout<<1;
		if (a[2]==b[2]&&a[3]==b[3]){
			cout<<1;
			if (((a[4]=='A'||a[4]=='B'||a[4]=='C')&&(b[4]=='A'||b[4]=='B'||b[4]=='C'))||((a[4]=='D'||a[4]=='F')&&(b[4]=='D'||b[4]=='F'))){
				cout<<1;
				if (((a[4]=='D'||a[4]=='F')&&(b[4]=='D'||b[4]=='F'))||((a[4]=='A'||a[4]=='B')&&(b[4]=='A'||b[4]=='B'))||((a[4]=='B'||a[4]=='C')&&(b[4]=='B'||b[4]=='C'))){
					cout<<1;
		}
				else{
					cout<<0;
				}}
			else{
				cout<<0;
				cout<<0;
			}}
		else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}