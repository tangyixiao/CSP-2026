#include<bits/stdc++.h> 
using namespace std;


int main(){
freopen("string.in","r",stdin);
freopen("string.out","w", stdout);
int a;
int ans=0;
string c;
int b[10000005][100000005];
cin>>a;
for(int i=0;i<a;i++){
	for(int j=0;j<2;j++){
	   cin>>b[i][j];	   	   
 }
}
for(int i=0;i<a;i++){
	   c+=b[i][0]*b[i][1];	   	   
}
for(int i=0;i<c.size()/2;i++){
	   if(c[i]==!c[c.size()-1-i]){
	   	    ans++;
	   }	   	   
}
cout<<ans;
return 0;
}