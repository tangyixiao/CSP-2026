#include <bits/stdc++.h>
using namespace std;
long long n,num,sum=0,num2=0;
char zm;
string zfc;
void hw(){
	if(num2%2!=0){
		for(long long i=num2/2-1;i>=0;i--){
			if(zfc[i]!=zfc[num2-i-1]){
					zfc[num2-i-1]=zfc[i];
					sum++;
				}
		}
		return;
	}
	else{
		for(long long i=num2/2-1;i>=0;i--){
				if(zfc[i]!=zfc[num2-i-1]){
					zfc[num2-i-1]=zfc[i];
					sum++;
				}
		}
		return;
	}
}
int main(){
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>num>>zm;
		for(long long j=0;j<num;j++){
			zfc+=zm;
		}
		num2+=num;
	}
	hw();
	cout<<sum;
	return 0;
}
