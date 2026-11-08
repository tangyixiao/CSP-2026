#include<bits/stdc++.h>
using namespace std;
string a1,a2,a3,a4;
int ww;
int vv;
int main( ){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>a3>>a4;
	if(a1==a3){
		 cout<<1;
		
		
		char v1=a2[0];
		char v2=a2[1];         //02 02B 02 02C
		char v3=a4[0];
		char v4=a4[1];
		
		if(v1==v3 and v2==v4){
			cout<<1;
		}else{
		 cout<<"000";
		return 0;
		}//判断两张车票对应的座位是否在同一节车厢的同一排
	
	char w1=a2[2];
	char w2=a4[2];

	if(w1=='A'||w1=='B'||w1=='C'){
		ww=1;
	}else{
	    ww=0;	                   
	}
	
	if(w2=='A'||w2=='B'||w2=='C'){
		vv=1;
	}else{
		vv=0;
	}
	
	if(vv==ww){
	cout<<1;
	}else{
    cout<<0;
	}
	
	if(w1=='A' and w2=='B'){
		cout<<1;
	}else if(w1=='B' and w2=='C'){
		cout<<1;
	}else if(w1=='B' and w2=='A'){
		cout<<1;
	}else if(w1=='C' and w2=='B'){
		cout<<1; 
	} else{
		cout<<0;
	}
	
	}else{
		cout<<"0000";
		return 0;
	} //座位是否在同一节车厢  如果在不同的车厢 不用判断 输出0000 
    
	return 0;
}
