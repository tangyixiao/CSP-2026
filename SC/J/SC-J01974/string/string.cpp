#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	struct sc{
		long long sm;
		char zm;
	};
	long long n,y=0,e=0,f=0;
	cin>>n;
	sc a[n+5];
	char t[n+5],r[n+5];
	long long b[30]={0};
	
	for(int i=1;i<=n;i++){
		cin>>a[i].sm>>a[i].zm;
		y+=a[i].sm;
		b[a[i].zm-96]+=a[i].sm;
		
		
	}
	for(int i=1;i<=n;i++){
		if(n%2==0){
			if(i<=y){
				e++;
				t[e]=a[i].zm;
			}
			else{
				f++;
				r[f]=a[i].zm;
			}
		}
		else{
			if(i<=y){
				e++;
				t[e]=a[i].zm;
			}
			if(i>y+1){
				f++;
				r[f]=a[i].zm;
		}
		}
	}
	long long h=0;
	for(int i=1;i<=y/2;i++){
		if(t[i]!=r[y-i+1]){
		    h++;
		    
		    
	}
	}
	
    bool pd=1;
	for(int i=2;i<=n;i++){
		if(a[i].zm==a[i-1].zm){
			pd=1;
		}
		else{
			pd=0;
			break; 
		}
	}
	long long d=y;
	if(n==1)cout<<0;
	else{
		if(pd==1){
			cout<<0;
		}
		else{
			for(int i=1;i<=26;i++){
				y=min(y,d-b[i]);
				                     
				
			}
			
			y=min(y,h);
			cout<<y;
		}
		
	}
	
	
	return 0;
}

