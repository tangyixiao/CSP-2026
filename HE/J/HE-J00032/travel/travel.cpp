#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c2,c4;
	int c1,c3;
	int c=0,n=0,g=0;
	int a[105],b[105];
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(c2.size()>c4.size()){
		c=c2.size();
	}else{
		c=c4.size();
	}
	for(int i=0;i<c;i++){
		if(c2[i]=='A'||c2[i]=='B'||c2[i]=='C'||c2[i]=='D'||c2[i]=='F'){
		break;}else{
			a[i]=c2[i]-'0';
		}
		if(c4[i]=='A'||c4[i]=='B'||c4[i]=='C'||c4[i]=='D'||c4[i]=='F'){
		 break;}else{
		 	 b[i]=c4[i]-'0';
		 }
	}
		for(int i=0;i<c;i++){
			if(a[i]==b[i]){
			g++;
		}
		if(g==c){
			cout<<"1";
			break;
		}else{
		cout<<"000";
		return 0;
	}
}

	for(int i=0;i<c;i++){
		if(c4[i]=='A'&&c2[i]=='B'||c4[i]=='B'&&c2[i]=='A'||c2[i]=='B'&&c4[i]=='C'||c2[i]=='C'&&c4[i]=='B'||c2[i]=='A'&&c4[i]=='C'||c2[i]=='C'&&c4[i]=='A'){
			cout<<"1";
			n=1;
		}
			if(c4[i]=='D'&&c2[i]=='F'||c4[i]=='F'&&c2[i]=='D'){
				cout<<"1";
				n=1;
				
			}	
	}
	if(n==0){
	cout<<"0";
			}
		for(int i=0;i<c;i++){
		if(c4[i]=='A'&&c2[i]=='B'||c4[i]=='B'&&c2[i]=='A'||c4[i]=='B'&&c2[i]=='C'||c4[i]=='C'&&c2[i]=='B'||c2[i]=='D'&&c4[i]=='F'||c2[i]=='F'&&c4[i]=='D'){
			cout<<"1";
			return 0;
		}
		
	}
	cout<<"0";
	
	return 0;
}
