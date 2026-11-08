#include <bits/stdc++.h>
using namespace std;
long long a[31],num=0;
int s(int e,int r){
	if(e==r){
		return 0;
	}
	while(1){
		if(a[e]==0||a[r]==0){
			break;
		}
		a[e]--;
		a[r]--;
		num++;	
	}
	if(a[e]==0&&a[r]==0){
		return 0;
	}else if(a[e]==0){
		return s(e+1,r);
	}else{
		return s(e,r-1);
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,b,d,j=10000,k;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b>>c;
		d=c-'a'+1;
		a[d]+=b;
	}
	for(int i=1;i<=26;i++){
		if(a[i]!=0){
			k=i;
			if(i<j){
				j=i;
			}
		}
	}
	s(j,k);
	cout<<num;
	return 0;
}
