#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,a2,b1,b2;
	int f=0;
	char a3,b3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	if(a1==b1){
		f+=1;
		if(a2==b2){
			f+=1;
			if(a3<='c'&&b3<='c'||a3>='d'&&b3>='d'){
				f+=1;
				if(abs(a3-b3)==1){
					f+=1;
				}
			}
		}
	}
	for(int i=1;i<=f;i++){
		cout<<"1";
	}
	for(int i=1;i<=4-f;i++){
		cout<<"0";
	}
	return 0;
} 