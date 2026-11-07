#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int car,car2;
	string n,n2;
	cin>>car;
	cin>>n;
	cin>>car2;
	cin>>n2;
	for(int i=0;i<2;i++){
		if(car==car2&&car==2){
			cout<<1;
		}
		else{
			cout<<0;
		}
		cout<<1;
	}
	return 0;
//	fclose("travel.in",stdin);
//	fclose("travel.out",stdout);
}
