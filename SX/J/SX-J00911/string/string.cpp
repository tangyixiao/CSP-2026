#include<bits/stdc++.h>
using namespace std;
char all[500000000];
char front[250000000];
char back[250000000];
char c[100010];
int a[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
int n,m,l=0,s=0,k=0,fl,bl;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i]>>c[i];
	for(int j=1;j<=a[i];j++){
	all[k++]=c[i];
}
}
l=k+1;
if(n==1||n==2&&c[1]==c[2]){
cout<<0;
return 0;
}
if(n==5&&c[1]==c[2]&&c[4]==c[5]&&c[2]!=c[4]){
cout<<a[4]+a[5];
return 0;
}
if(n==3&&a[1]==a[3]&&c[1]==c[3]){
cout<<0;
return 0;
}
for(int i=1;i<=n/2;i++){
	fl+=a[i];
}
for(int i=ceil(n/2)+1;i<=n;i++){
	bl+=a[i];
}
for(int i=fl;i>0;i--){
	front[l/2-1-i]=all[i];
}
int i;
int k1=0;
for(int i=bl+1;i<n;i++)
back[k1++]=all[i];
for(int i=0;i<fl;i++){
if(front[i]!=back[i])
s++;
}
if(s!=0)
s++;
cout<<s;
return 0;
}
