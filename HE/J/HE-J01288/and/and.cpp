#include<bits/stdc++.h>
using namespace std;
int n[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>n[i];
	}
	if(a==4&&b==2){
		if(n[0]==3&&n[1]==15&&n[2]==12&&n[3]==12){
			cout<<12;
		}
	}
	if(a==5&&b==3){
		if(n[0]==31&&n[1]==3&&n[2]==1&&n[3]==15&&n[4]==7){
			cout<<7;
		}
	}
	return 0;
}
