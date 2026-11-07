#include<bits/stdc++.h>
using namespace std;
struct node{
	string c,s,p;
	char z;
}a[4];
int wz(char x){
	if(x=='A'||x=='B'||x=='C') return 1;
	if(x=='D'||x=='F') return 2;
}
int zw(char y){
	if(y=='A') return 1;
	if(y=='B') return 2;
	if(y=='C') return 3;
	if(y=='D') return 5;
	if(y=='F') return 6;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){
		cin>>a[i].c>>a[i].s;
		a[i].p=a[i].p+a[i].s[0]+a[i].s[1];
		a[i].z+=a[i].s[2];
	}
	if(a[1].c==a[2].c){
		if(a[1].p==a[2].p){
			if(wz(a[1].z)==wz(a[2].z)){
				if(zw(a[1].z)-zw(a[2].z)==1||zw(a[2].z)-zw(a[1].z)==1){
					cout<<"1111";
					return 0;
				}else{
					cout<<"1110";
					return 0;
				}
			}else{
				cout<<"1100";
				return 0;
			}
		}else{
			cout<<"1000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
}