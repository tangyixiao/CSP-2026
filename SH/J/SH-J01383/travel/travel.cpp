#include<bits/stdc++.h>
using namespace std;
string c1,c2,r1,r2,a1,b1,a2,b2;
int a,b;
char l[3]={'A','B','C'};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>r1>>c2>>r2;
	a1=r1[0];
	b1=r1[1];
	a2=r2[0];
	b2=r2[1];
	for (int i=0;i<3;i++){
		if (r1[2]==l[i]){
			a=1;
		}
		if (r2[2]==l[i]){
			b=1;
		}
	}
	if (c1==c2){
		cout<<1;
		if (b2==b1&&a1==a2){
			cout<<1;
			if (!(a^b)){
				cout<<1;
				if ((r1[2]==r2[2]+1||r2[2]==r1[2]+1))cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;	
		}
		else cout<<0<<0<<0;
	}else{
		cout<<0<<0<<0<<0;
	}

}
