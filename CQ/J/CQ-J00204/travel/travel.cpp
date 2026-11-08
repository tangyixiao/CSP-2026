#include<bits/stdc++.h>
using namespace std;
int a,b,f,f2;
char a1,a2,a3,b1,b2,b3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>a2>>a3;
	cin>>b>>b1>>b2>>b3;
//	cout<<a<<" "<<a1<<" "<<a2<<" "<<a3<<endl;
//	cout<<b<<" "<<b1<<" "<<b2<<" "<<b3<<endl;
	if(a==b) {
		cout<<1;
		if(a1==b1 and a2==b2) {
			cout<<1;
			f2=1;
			if((int(a3)<=67 and int(b3)<=67 and int(a3)>=65 and int(b3)>=65) or (int(a3)>=68 and int(b3)>=68 and int(a3)<=70 and int(b3)>=70)) {
				cout<<1;
				f=1;
			}
			else {
				cout<<00;
				f=0;
			}
		}
		else {
			cout<<"000";
			f2=0;
		}
	}
	else cout<<"0000";
	
	if(((int(a3)+1==int(b3)) or (int(a3)-1==int(b3))) and f==1 and a1==b1 and a2==b2 and a==b){
			cout<<1;
	}
	else if(f2!=0)cout<<0;
	return 0;
} 
