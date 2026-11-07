#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	long long s[1000005];
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	long long max1=s[0],max2=s[0],mw=0;
	for(int i=0;i<n;i++){
		if(max1<s[i]){
			max1=s[i];
			mw=i;
		}
	}
	s[mw]=0;
	for(int i=0;i<n;i++){
		if(max2<s[i]){
			max2=s[i];
		}
	}
	if(max1=max2){
		cout<<max1;
	}
	if(max1>max2){
		cout<<max2;
	}
}
