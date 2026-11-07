#include <bits/stdc++.h>
using namespace std;
int find_s(char a,char b){
	int i=min(a,b);
	int x=max(a,b);
	if(x<68)
		return 1;
	else if(x==69&&i==68)
		return 1;
	else
		return 0;
}
int check(char a,char b){
	int i=min(a,b);
	int x=max(a,b);
	if(x-1==i)
		return 1;
	else
		return 0;
}
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
char a[10];

for(int i=0;i<10;i++){
	cin>>a[i];
}
if(a[0]==a[5]&&a[1]==a[6])
	cout<<1;
else{
	cout<<0<<0<<0<<0;
	return 0;
}

if(a[2]==a[7]&&a[3]==a[8])
	cout<<1;
else{
	cout<<0<<0<<0;
	return 0;
}
if(find_s(a[4],a[9]))
	cout<<1;
else{
	cout<<0<<0;
	return 0;
}
if(check(a[4],a[9]))
	cout<<1;
else
	cout<<0;
	return 0;
}