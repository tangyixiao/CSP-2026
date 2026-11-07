#include<bits/stdc++.h>
using namespace std;
int n,m,i=0,j,y11,x11,f=0,k=0,o,p;
string a,b;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	cin>>n>>a>>m>>b;
	if(n==m){
		k=1;
		cout<<1;                 
	}
	else cout<<0;
	if(k==1){
		while(i<=1 &&j<=1){
			if(a[i]==b[j]) p=1;
			else{
				p=0;
				break;
			} 	
			i++;
			j++;	
		}
		if(p==1){
			cout<<1;
			f=1;
		}
		else cout<<0;
		if(f==1){
			if(a[2]>'C'){
				if(b[2]>'C') cout<<1;
				o=1;
			}
			else if(a[2]<='C'&&b[2]<='C'){
				cout<<1;
				o=1;
			}
			else cout<<0;
			if(o==1){
				if(abs(a[2]-b[2])==1) cout<<1;
				else cout<<0;
			}
			else cout<<0;
		}
		else{
			cout<<0;
			cout<<0;
		}
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
	}

	return 0;												
} 
