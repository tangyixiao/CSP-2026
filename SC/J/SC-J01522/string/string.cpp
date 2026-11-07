#include<bits/stdc++.h>
using namespace std;
struct node{
	int len;
	char s;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].len>>a[i].s;
	for(int i=1,j=n;i<j;){
		if(a[i].s==a[j].s){
			if(a[i].len>a[j].len){
				a[i].len-=a[j].len;
				j--;
			}
			else if(a[i].len<a[j].len){
				a[j].len-=a[i].len;
				i++;				
			}
			else {
				i++;
				j--;
			}
		}
		else {
			if(a[i].len>a[j].len){
				ans+=a[j].len;
				a[i].len-=a[j].len;
				j--;
			}
			else if(a[i].len<a[j].len){
				ans+=a[i].len;
				a[j].len-=a[i].len;
				i++;				
			}
			else {
				ans+=a[i].len;
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}