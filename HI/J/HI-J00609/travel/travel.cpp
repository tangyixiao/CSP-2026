#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int sum = 0;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a[0] == c[0]){
		if(a[1] == c[1]){
			cout<<1;
		}else{
			cout<<"0000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
		
	} 
	if(b[0] == d[0]){
		if(b[1] == d[1]){
			cout<<1;
			sum = 1;
		}else{
			cout<<0;
		}
	}
	if(sum == 1){
			if((b[2] == 'A' || b[2] == 'B' || b[2] == 'C') && (d[2] == 'A' || d[2] == 'B' || d[2] == 'C')){
			cout<<1;
		}else if((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	
	
	if(sum == 1){
		int n,m;
		n = b[2] - '0';
		m = d[2] - '0';
		if((b[2] == 'C' || b[2] == 'D') && (d[2] == 'C' || d[2] == 'D')){
			cout<<0;
			return 0;
		}
		if(n - m == 1 || m - n == 1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	
	
	return 0;
}
