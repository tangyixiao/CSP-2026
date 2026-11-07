#include<bits/stdc++.h>
using namespace std;
long long n;
string s="";
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long len=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
//	if(len<=5e7){
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=a[i];j++){
//				s+=c[i];
//			}
//		}
//		s=" "+s;
//		long long cnt=0;
//		if(len%2==0){
//			for(int i=1;i<=len/2;i++){
//				if(!(s[i]==s[i+(len/2)])){
//					cnt++;
//				}
//			}
//		}
//		else if(len%2==1){
//			for(int i=1;i<=(len-1)/2;i++){
//				if(!(s[i]==s[i+((len+1)/2)])){
//					cnt++;
//				}
//			}
//		}
//		cout<<cnt<<"\n";
//	}
//	else{
		long long l=1,r=n,cnt=0;
		while(l<r){
			if(a[l]>a[r]){
				a[l]-=a[r];
				if(c[l]!=c[r]){
					cnt+=a[r];
				}
				r--;
			}
			if(a[l]<=a[r]){
				a[r]-=a[l];
				if(c[l]!=c[r]){
					cnt+=a[l];
				}
				l++;
			}
		}
		cout<<cnt;
//	}
	return 0;
}
/*
6
100000000 a
100000000 a
100000000 a
100000000 b
100000000 b
100000000 b	

*/