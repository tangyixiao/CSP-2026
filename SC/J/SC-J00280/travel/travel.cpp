#include<bits/stdc++.h>
#define ll long long
#define un unsigned long long
using namespace std;
ll read(){
	char c=getchar(),fu=0;
	while(c<'0' || c>'9'){
		if(c=='-'){
			fu=1;
		}
		c=getchar();
	}
	ll num=0;
	while((c>='0') && (c<='9')){
		num*=10;
		num+=(c-'0');
		c=getchar();
	}
	return fu?(-1)*num:num;
}
void out(ll num){
	if(num<0){
		putchar('-');
		num*=-1;
	}
	if(num>=10){
		out(num/10);
		putchar((num%10)+'0');
	}
	else{
		putchar(num+'0');
	}
	return ;
}
string c1,c2,s1,s2,l1,l2;
bool ret[7];
bool cmpside(){
	int side1,side2;
	if(s1[2]=='D' || s1[2]=='E'){
		side1=0;
	}
	else{
		side1=1;
	}
	if(s2[2]=='D' || s2[2]=='E'){
		side2=0;
	}
	else{
		side2=1;
	}
	if(side1==side2){
		return 1;
	}
	else{
		return 0;
	}
}
bool cmpnext(){
	if(abs(s1[2]-s2[2])==1){
		return 1;
	} 
	else{
		return 0;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ret[1]=1;
	}
	if(ret[1] && ((s1[0]==s2[0]) && (s1[1]==s2[1]))){
		ret[2]=1;
	}
	if(ret[2] && cmpside()){
		ret[3]=1;
	}
	if(ret[3] && cmpnext()){
		ret[4]=1;
	}
	for(int i=1;i<=4;i++){
		cout<<ret[i];
	}
	putchar('\n');
}