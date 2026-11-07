#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n;
int num=0;
int sum=0;
int a[10000]={0};
int q=1;
int w=0;
string s[10000]={};
cin>>n;
string c[10000]={};
for(int i=1;i<=n;i++){
	cin>>a[i]>>c[i];
	sum=sum+a[i];
	
}
for(int i=1;i<sum;i++){
if(i>a[q]){
	q++;
}
if(i<=a[q]){
s[i]=c[q];
}
}

if(sum%2==0){
for(int i=1;i<=sum/2;i++) {
		if(c[i]!=s[sum+1-i]){
			num++;}
	}
}
if(sum%2!=0){
for(int i=1;i<=(sum-1)/2;i++) {
		if(c[i]!=s[sum+1-i]){
			num++;}
			
		
	}cout<<num;
}
	fclose(stdin);
	fclose(stdout);
	return 0;
}