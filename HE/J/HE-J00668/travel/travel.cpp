#include<bits/stdc++.h>
using namespace std;
void fin(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int x=0,y=0;
	x=s1[0]*10+s1[1];
	y=s3[0]*10+s3[1];
	if((x==y)&&(x!=1&&x!=16)){
		cout<<1<<" ";
		x=0,y=0;
		x=s2[0]*10+s2[1];
		y=s4[0]*10+s4[1];
		if(x==y){
			cout<<1<<" ";
		int c1,c2;
		c1=int(s2[2]-'A');
		c2=int(s4[2]-'A');
			if((c1<=2&&c2<=2)||(c1>=3&&c2>=3)){
				cout<<1<<" ";
				if(abs(c1-c2)==1){
					cout<<1<<" ";
					return;
			}else{
				cout<<0<<" ";
				return;
			}
		}else{
			cout<<0<<" "<<0<<" ";
		}
	}else{
		cout<<0<<" "<<0<<" "<<0;
	}
}else{
	cout<<0<<" "<<0<<" "<<0<<" "<<0;
	return;
}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	fin();
	return 0;
} 
