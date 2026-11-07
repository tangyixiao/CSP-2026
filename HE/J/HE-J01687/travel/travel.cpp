#include<bits/stdc++.h>
using namespace std;
string a,b,a1,b1;
int c[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a>>b>>a1>>b1;
//	cout<<a[2]
	if(a==a1) {
	cout<<1;c[1]=1;	
//	cout<<"是在同一节车厢";
	}
	else cout<<0;
	if((b[0]==b1[0]&&b[1]==b1[1])&&c[1]==1){
		cout<<1;c[2]=1;
//		cout<<"在同一节车厢的同一排";
	}
	else cout<<0;
	if(c[1]==1&&c[2]==1&&(((b[2]<='C'&&b[2]>='A')&&(b1[2]<='C'&&b1[2]>='A'))||((b[2]>='D'&&b[2]<='F')&&(b1[2]>='D'&&b1[2]<='F')))){
		cout<<1;
		c[3]=1;
//		cout<<"在同一节车厢的同一排，且位于过道的同一侧";
	}
	else cout<<0;
	if(c[1]==1&&c[2]==1&&c[3]==1){
		if(b[2]=='C'){
			if(b1[2]=='B')cout<<1;
			else cout<<0;
		}
		else if(b[2]=='B'){
			if(b1[2]=='A'||b1[3]=='C'){
				cout<<1;		
			}
			else cout<<0;
		
		}
		else if(b[2]=='A'){
			if(b1[2]=='B')cout<<1;
			else cout<<0;
		}
		else if(b[2]=='F'){
			if(b1[2]=='D')cout<<1;
			else cout<<0;
		}
		else if(b[2]=='D'){
			if(b1[2]=='F')cout<<1;
			else cout<<0;
		}
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
