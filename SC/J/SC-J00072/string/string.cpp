#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,f=0;
	cin>>n;
	long long a[n+5],h=0;
	char b[n+5];
	string hh="";
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		h+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			hh+=b[i];
			//cout<<hh<<endl;
		}
	}
	long long mid;
	if(h%2==1)mid=h/2+1;
	else mid=h/2;
	//cout<<hh[mid]<<" "<<mid<<endl;
	for(int i=mid;i<h;i++){
		//cout<<hh[i]<<" "<<hh[mid*2-i-2]<<" "<<mid*2-i-2<<endl;
		if(hh[i]!=hh[mid*2-i-2])f+=1;
	}
	cout<<f;
	return 0;
}