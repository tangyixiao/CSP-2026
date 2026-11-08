#include <bits/stdc++.h>
using namespace std; 
char s1,a[5],s2,b[5];
long long sum ;
int main(){
	freopen("travel.in ","r",stdin);
	freopen("travel.out","w",stdout);	
	
	cin >> s1;
	for(int i=1;i<=4;i++){
		cin >> a[i];
}	
	cin >> s2 ;
	for(int i=1;i<=4;i++){
		cin >> b[i];
}	
	if(s1==s2) sum=1000;
	else sum=0 ;
	for(int i=1;i<=3;i++){
		if(a[1]==b[1] and a[2]==b[2]){
			sum+=110;
			break;
		} 
		else if(a[1]!=b[1] and a[2]==b[2]){
			sum+=100;
			break;
		} 
		else if(a[1]==b[1] and a[2]!=a[2]){
			sum+= 10;
			break;
		} 
		else sum+=0;
		if(a[3]=='A' and b[3]=='B') sum+=1 ;
		if(a[3]=='B' and b[3]=='C') sum+=1 ;
		if(a[3]=='C' and b[3]=='D') sum+=1 ;
		if(a[3]=='D' and b[3]=='E') sum+=1 ;
		if(a[3]=='E' and b[3]=='F') sum+=1 ;
		else sum+=0; 
	}
	if(sum==0) cout <<"0000" ;
	else cout << sum ;
	
	
	return 0; 
} 






        














































































































