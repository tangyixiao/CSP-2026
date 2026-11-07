#include<bits/stdc++.h>
using namespace std;
struct aaa{
	long long n;
	char d;
};
aaa a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long l,ans=0;
	cin>>l;
	for(int i=1;i<=l;i++){
		cin>>a[i].n>>a[i].d;
	}
	int x=0;
	for(int i=1,j=l;i<l&&j>1&&i<j;){
		if(a[i].d==a[j].d){
			if(a[i].n>a[j].n){
				a[i].n-=a[j].n;
				j--;
			}else if(a[j].n>a[i].n){
				a[j].n-=a[i].n;
				i++;
			}
			else if(a[i].n==a[j].n){
				j--;
				i++;
			}
		}else{
			if(a[i].n>a[j].n){
				a[i].n-=a[j].n;
				ans+=a[j].n;
				j--;
			}
			else if(a[i].n<a[j].n){
				a[j].n-=a[i].n;
				ans+=a[i].n;
				i++;
			}else{
				ans+=a[i].n;
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}