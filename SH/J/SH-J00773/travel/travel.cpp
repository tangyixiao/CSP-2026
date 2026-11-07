#include<bits/stdc++.h>
using namespace std;
char r[5],x[5];
char rrr[5],xxx[5];
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
for(int i=1;i<=2;i++){
	cin>>r[i];
}
for(int i=1;i<=3;i++){
	cin>>rrr[i];
}
for(int i=1;i<=2;i++){
	cin>>x[i];
}
for(int i=1;i<=3;i++){
	cin>>xxx[i];
}
bool f_1=1,f_2=1,f_3=1,f_4=1;
for(int i=1;i<=2;i++){
	if(r[i]!=x[i]){
		f_1=0;
	}
}
if(f_1==1){
	for(int i=1;i<=2;i++){
		if(rrr[i]!=xxx[i]) f_2=0;
	}
}else{
	f_2=0;
}
if(f_2==1){
	bool q=0,q_1=0;
	if(rrr[3]=='A'||rrr[3]=='B'||rrr[3]=='C') q=1;
	if(xxx[3]=='A'||xxx[3]=='B'||xxx[3]=='C') q_1=1;
	if(q!=q_1) f_3=0;
}else{
	f_3=0;
}
if(f_3==1){
	if(abs(rrr[3]-xxx[3])!=1) f_4=0;
}else{
	f_4=0;
}
cout<<f_1<<f_2<<f_3<<f_4;
return 0;
}
//ÃÜÂë Trick||Treat! 
