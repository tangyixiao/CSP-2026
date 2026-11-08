#include<bits/stdc++.h>
using namespace std;
int b[5];
char a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	if(a[1]==a[6] && a[2]==a[7]){
		b[1]=1;
	}else{
		b[1]=0;
	}
	if(a[3]==a[8] && a[4]==a[9] && b[1]==1){
		b[2]=1;
	}else{
		b[2]=0;
	}
	if(a[5]>=65 && a[5]<=67 && a[10]>=65 && a[10]<=67 && b[2]==1){
		b[3]=1;
	}else if(a[5]>=68 && a[5]<=69 && a[10]>=68 && a[10]<=69 && b[2]==1){
		b[3]=1;
	}else{
		b[3]=0;
	}
	if(b[1]==1 && b[2]==1 && b[3]==1){
		if(a[5]+1==a[10] || a[5]-1==a[10]){
			b[4]=1;
		}else{
			b[4]=0;
		}
	}else{
		b[4]=0;
	}
	cout<<b[1]<<b[2]<<b[3]<<b[4];
	return 0;
}
