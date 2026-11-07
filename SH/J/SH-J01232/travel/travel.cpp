#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x1,x2;
	string p1,p2;
	cin>>x1>>p1>>x2>>p2;
	if(x1!=x2) {
		cout<<0<<0<<0<<0;return 0;
	}else{
		cout<<1;
		if(p1[0]==p2[0] && p1[1]==p2[1]){
			cout<<1; 
			if(p1[2]>='A' && p1[2]<='C' && p2[2]>='A' && p2[2]<='C'){
				cout<<1;
				if(p1[2]+1==p2[2] || p1[2]-1==p2[2]){
					cout<<1;
				}else{
					cout<<0;
				}
				}
			else if(p1[2]>='D' && p1[2]<='F' && p2[2]>='D' && p2[2]<='F'){
					cout<<1;
					if(p1[2]+1==p2[2] || p1[2]-1==p2[2]){
					cout<<1;
				}else{
					cout<<0;
				}
				}else{
					cout<<0<<0;
				}
			
		}else{
			cout<<0<<0<<0;
		}
	}

	
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 
