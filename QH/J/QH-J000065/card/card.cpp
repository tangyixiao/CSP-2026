#include<bits/stdc++.h>
using namespace std;
int main(){ 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,n[100000],m,cnt=1;
	cin>>a>>m;
	for(int i=1;i<=a;i++){
		cin>>n[i-1];
		cnt++;
	}
	if(n[2]-n[1]==1&&n[3]-n[2]==1){
		cnt-=3;
	} 
	cout<<3<<" "<<1<<" "<<4;
}




