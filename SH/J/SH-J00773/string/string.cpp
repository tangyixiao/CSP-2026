#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct A{
	long long num;
	char s;
}a[200005];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i].num;
	cin>>a[i].s;
}
for(int i=1,j=n;i<j;){
	if(a[i].s==a[j].s){
		long long mi=min(a[i].num,a[j].num);
		a[i].num-=mi;
		a[j].num-=mi;
	}else{
		long long mi_1=min(a[i].num,a[j].num);
		ans+=mi_1;
		a[i].num-=mi_1;
		a[j].num-=mi_1;	
	}
	if(a[i].num==0) i++;
	if(a[j].num==0) j--;
}
cout<<ans;
return 0;
}
