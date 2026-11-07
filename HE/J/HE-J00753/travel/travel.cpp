#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in",'w',travel);
	freopen("travel.out",'r',travel);
	string a,b,c,d,e;
	int x,y;
	cin>>a>>b>>c>>d;
	if(b[2]>='A'&&b[2]<='C'){
		x=1;
	}else{
		x=2;
	}
	if(d[2]>='A'&&d[2]<='C'){
		y=1;
	}else{
		y=2;
	}	
	if(a[0]=='0'&&a[1]=='1'){
		
		cout<<0<<0<<0<<0;
		return 0;
	}else if(a[0]=='1'&&a[1]=='6'){

		cout<<0<<0<<0<<0;
		return 0;		
	}
	if(c[0]=='0'&&c[1]=='1'){
		cout<<0<<0<<0<<0;
		return 0;
	}else if(c[0]=='1'&&c[1]=='6'){
		cout<<0<<0<<0<<0;
		return 0;		
	}
	if(a[0]==c[0]&&a[1]==c[1]){
		if(b[0]==d[0]&&b[1]==d[1]){
			if(x==y){
				if(x==2){
					cout<<1<<1<<1<<1;
					return 0;
				}else if(b[2]=='B'||d[2]=='B'){
					cout<<1<<1<<1<<1;
					return 0;
				}else{
					cout<<1<<1<<1<<0;
					return 0;
				}
			}else{
					cout<<1<<1<<0<<0;
				return 0;
			}
		}else{
			cout<<1<<0<<0<<0;
			return 0;			
		}
	}else {
		cout<<0<<0<<0<<0;
		return 0;		
	}
	return 0;
}
