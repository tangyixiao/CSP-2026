#include<bits/stdc++.h>
using namespace std;
struct nb{
	long long number;
    char zf;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
     int n;
     long long ans=0;
     cin>>n;
     for(int i=1;i<=n;i++)
     cin>>a[i].number>>a[i].zf;
     int s=1;
     while(n>s){
     	if(a[s].zf==a[n].zf){
     		if(a[s].number>=a[n].number){
        a[s].number-=a[n].number;
        a[n].number=0;
        n--;
			 }
			 else {
        a[n].number-=a[s].number;
        a[s].number=0;
        s++;
			 }
		 }
		 else {
		if(a[s].number>=a[n].number){
			ans+=a[n].number;
        a[s].number-=a[n].number;
        a[n].number=0;
        n--;
			 }
			 else {
			 	ans+=a[s].number;
        a[n].number-=a[s].number;
        a[s].number=0;
        s++;
			 }
		 }
	 }
	 cout<<ans;
	return 0;
}