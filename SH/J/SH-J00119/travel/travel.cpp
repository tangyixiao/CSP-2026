#include<bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0,d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int cr,cx;
	string sr,sx;
	cin>>cr>>sr>>cx>>sx;
	if(cr=cx){
		a=1;
		if(sr[0]=sx[0]){
			if(sr[1]=sx[1]){
				b=1;
				if(sr[2]='A'||sr[2]='B'||sr[2]='C'){
					if(sx[2]='A'||sx[2]='B'||sx[2]='C')
						c=1;
						if((sr[2]="A"&&sx[2]="B")||(sr[2]="B"&&sx[2]="A")||(sr[2]="B"&&sx[2]="C")||(sr[2]="C"&&sx[2]="B")||(sr[2]="D"&&sx[2]="F")||(sr[2]="F"&&sx[2]="D"))
							d=1;
				}
				else if(sr[2]='D'||sr[2]='F'){				}
					if(sx[2]='D'||sx[2]='F')
						c=1;
						if((sr[2]="A"&&sx[2]="B")||(sr[2]="B"&&sx[2]="A")||(sr[2]="B"&&sx[2]="C")||(sr[2]="C"&&sx[2]="B")||(sr[2]="D"&&sx[2]="F")||(sr[2]="F"&&sx[2]="D"))
							d=1;
				}
			}	
		}
	}

	
	cout<<a<<b<<c<<d;
	return 0;
} 
