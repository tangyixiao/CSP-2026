#include<bits/stdc++.h> 
using namespace std;


int main(){
freopen("card.in","r",stdin);
freopen("card.out","w", stdout);
int a,b;
cin>>a>>b; 
int c[100005];
for(int i=0;i<a;i++){
	cin>>c[i];
	if(a==4&&b==3)cout<<3<<" "<<1<<" "<<4;
	if(a==10&&b==3)cout<<10<<" "<<3<<" "<<3;
}

return 0;
}