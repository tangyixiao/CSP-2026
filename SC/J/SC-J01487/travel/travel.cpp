#include<iostream> 
using namespace std;
char a[4];
char b[7];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[0]>>a[1];
	for(int i=1;i<=3;i++){
		cin>>b[i];
	}
	cin>>a[2]>>a[3];
	for(int i=4;i<=6;i++){
		cin>>b[i];
	}
	if(a[2]==a[0]&&a[1]==a[3]){
		cout<<1;
		if(b[1]==b[4]&&b[2]==b[5]){
			cout<<1;
			if(b[3]-'A'>2&&b[6]-'A'>2){
				cout<<1;
				if(b[3]==b[6]-2||b[3]-2==b[6]){
					cout<<1;	
				}
				else{
					cout<<0;
				}
			}	
			else if(b[3]-'A'<=2&&b[6]-'A'<=2){
				cout<<1;
				if(b[3]==b[6]-1||b[3]-1==b[6]){
					cout<<1;	
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0<<0;
			}	
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;	
}