#include<iostream>
using namespace std;
int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
int a,b,c,d=0,x=0,n[110],m[111];
cin>>a>>b;
for(int i=0;i<a;i++){
	cin>>n[i];
}c=a;
if(a%2==0){
	c=c/2-1;
}else{
	c=c/2;
}for(int i=c;i<a;i++){
	cout<<n[i]<<" "<<c<<endl;
	if(n[i]==n[c]){
		d++;
	}
}for(int i=0;i<c;i++){
	x=x+n[c]-n[i];
}if(x==b){
	d=d+c;
}cout<<d;
return 0;
}
