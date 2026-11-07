#include<bits/stdc++.h>

#define bg a[i].num -= a[j].num;a[j].num=0;
#define sml a[j].num -= a[i].num; a[i].num=0;
using namespace std;

struct str{
	long long num;
	char s;
}a[200005];
int n;
long long ans;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].s;
		sum+=a[i].num;
		sum%=2;
	}
	for(int i=1,j=n;i<=j;){
		
		if(a[i].num==0) i++;
		if(a[j].num==0) j--;
		if((sum & 1)&& i==j ) break;
		if(a[i].s!=a[j].s) {
			if(a[i].num >= a[j].num ) {ans+=a[j].num; bg}
			else{ans+=a[i].num; sml} 
		} 
		else if(a[i].num>a[j].num) {bg}
		else {sml}
	}
	cout<<ans;
	return 0;
} 
