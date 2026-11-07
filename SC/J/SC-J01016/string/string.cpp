#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct zm{
	long long len;
	char th;
}a[N];
unsigned long long num;
long long n;
long long x;
char y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	long long id=0;
	
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		if(y==a[id].th){
			a[id].len+=x;
		}
		else{
			id++;
			a[id].len=x;
			a[id].th=y;
		}
	} 
//	cout<<id<<"\n";
	long long l=1,r=id;
	while(l<r){
		if(a[l].th!=a[r].th){
			if(a[l].len<a[r].len){
				num+=a[l].len;
				a[r].len-=a[l].len;
				l++;
			}
			else{
				num+=a[r].len;
				a[l].len-=a[r].len;
				r--;
			}
		}
		else{
			if(a[l].len<a[r].len){
				a[r].len-=a[l].len;
				l++;
			}
			else{
				a[l].len-=a[r].len;
				r--;
			}
		}
	}
	cout<<num;
	return 0;
}