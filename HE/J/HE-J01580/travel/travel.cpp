#include<bits/stdc++.h>
using namespace std;
int a666[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int car1,car2;
	string sit1,sit2;
	cin>>car1>>sit1>>car2>>sit2;
	if(car1 == car2){
		a666[1] = 1;
	}
	if(a666[1] == 1&&sit1[0] == sit2[0] && sit1[1] == sit2[1]){
		a666[2] = 1;
	}
	if(a666[1] == 1&&a666[2] == 1 && ((sit1[2]>='D'&&sit2[2]>='D') || (sit1[2]<='C'&&sit2[2]<='C'))){
		a666[3] = 1;
	}
	if(a666[1] == 1&&a666[2] == 1 && a666[3] == 1 &&((sit1[2] == 'A'&&sit2[2] == 'B') || (sit1[2] == 'B'&&sit2[2] == 'A') ||(sit1[2] == 'B'&&sit2[2] == 'C') || (sit1[2] == 'C'&&sit2[2] == 'B') || (sit1[2] == 'D'&&sit2[2] == 'F')||(sit1[2] == 'F'&&sit2[2] == 'D'))){
		a666[4] = 1;
	}
	cout<<a666[1]<<a666[2]<<a666[3]<<a666[4];
	return 0;
}
