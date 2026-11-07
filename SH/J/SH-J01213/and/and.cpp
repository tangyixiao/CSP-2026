#include<bits/stdc++.h>
using namespace std;
int a[55];
void te_tw(int c){
	int len=1;
	while(c){
		if(c%2==1){
			a[len]++;		
		}
		c/=2;
		len++;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,tmp,cnt=0,len1=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		te_tw(tmp);
	}
	for(int i=55;i>=0;i--){
		if(a[i]>=m && len1<m){
			cnt+=pow(2,i-1);
			len1++;			
		}
	}
	cout<<cnt;
	return 0;
}
