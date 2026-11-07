#include <bits/stdc++.h>
using namespace std;
char arr[5]={'A','B','C','D','F'};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	int a22,b22;
	cin>>a1>>a2>>b1>>b2;
	for(int i=0;i<=4;i++){
		if(a2[2]==arr[i]){
			a22=i;
		}
		if(b2[2]==arr[i]){
			b22=i;
		}
	}
	if(a1!=b1){
		cout<<"0000"<<endl;
		return 0;
	}
	else{
		if((a2[0]!=b2[0])||(a2[1]!=b2[1])){
			cout<<"1000"<<endl;
			return 0;
		}
		else{
			if((a22<=2&&b22>=2)||(a22>=3&&b22<=3)){
				cout<<"1100"<<endl;
				return 0;
			}
			else{
				if((a22==0&&b22==2)||a22==2&&b22==0){
					cout<<"1110"<<endl;
					return 0;
				}
				else{
					cout<<"1111"<<endl;
					return 0;
				}
			}
		}
	}
}
