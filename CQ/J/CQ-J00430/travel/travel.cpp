#include<bits/stdc++.h>
using namespace std;
char a[5],a1[5],b[5],b1[5];
int ac,bc,ap,bp;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	ac=a[0]*10+a[1];
	bc=b[0]*10+b[1];
	if(ac==bc){
		ap=a1[0]*10+a1[1];
		bp=b1[0]*10+b1[1];
		if(ap==bp){
			if((a1[2]<='C'&&b1[2]<='C') or (a1[2]>='D'&&b1[2]>='D')){
				if(((a1[2]+1)==b1[2]) or ((a1[2]-1)==b1[2])){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
		
	}else{
		cout<<"0000";
	}

	return 0;
}
