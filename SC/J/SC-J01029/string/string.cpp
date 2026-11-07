#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[10005],a_inv[10005];
	long long sum=0,mid,cnt=0;
	char c[10005],c_inv[10005];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		a_inv[n-1-i] = a[i];
		c_inv[n-1-i] = c[i];
		sum+=a[i];
	}
	mid = sum/2;
	for(int i=0;i<mid;i++){
		long long tmpsum=0;
		char tmp1,tmp2;
		for(int j=0;j<n;j++){
			if(i <=tmpsum+1){
				tmp1 = c[j];
				break;
			}
			tmpsum += a[j];
		}
		tmpsum=0;
		for(int j=0;j<n;j++){
			if(i <=tmpsum){
				tmp2 = c_inv[j];
				break;
			}
			tmpsum += a_inv[j];
		}
		if(tmp1!=tmp2) cnt++;
	}
	cout<<cnt;
	return 0;
}