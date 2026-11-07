#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ge=0;
	long long a;
	cin>>a;
	vector<long long> shu1(a);
	vector<char> shu2(a);
	long long ban=0;
	long long ban2=0;
	long long gai=0;
	for(long long x=0;x<a;x++){
		long long y;
		char z;
		cin>>y>>z;
		ge+=y;
		shu1[x]=y;
		shu2[x]=z;
	}
	ban=ge/2;
	ban2=ban;
	if(ge%2==1){
		ban2++;
		ban++;
	}
	for(long long x=0;x<a;x++){
		if(shu1[x]<=ban2){
			ban2-=shu1[x];
		}else{
			if(shu2[x]==shu2[(a+1)/2*2-x]){
			}else{
				gai+=shu1[x]-ban2;
			}
			ban2=0;
		}
	}
	cout<<gai;
	return 0;
}