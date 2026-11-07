#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005],sum=0;
	string c,s;
	cin>>n;
	int zz=1,yz=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		s+=c;
	} 
	while(yz>zz){
		if(s[zz-1]==s[yz-1]){
			if(a[zz]>a[yz]){
				a[zz]-=a[yz];
				yz--;
			}
			else if(a[zz]<a[yz]){
				a[yz]-=a[zz];
				zz++;
			}
			if(a[zz]==a[yz]){
				zz++;
				yz--;
			} 
		}
		else{
			if(a[zz]>a[yz]){
				a[zz]-=a[yz];
				sum+=a[yz];
				yz--;
			}
			else if(a[zz]<a[yz]){
				a[yz]-=a[zz];
				sum+=a[zz];
				zz++;
			}
			else if(a[zz]==a[yz]){
				sum+=a[zz];
				zz++;
				yz--;
			} 
		}
	}
	cout<<sum;
	return 0;
}
