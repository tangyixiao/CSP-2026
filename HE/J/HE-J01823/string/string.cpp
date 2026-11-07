#include<bits/stdc++.h>
using namespace std;
long long z,sum=0;
struct __{
	long long len;
	char c;
}a[200000+10]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>z;
	for(int i=1;i<=z;i++){
		cin>>a[i].len>>a[i].c;
	}
	int l=1,r=z;
	while(l<r){
		if(a[l].c==a[r].c){
			int mn=min(a[l].len,a[r].len);
			a[l].len-=mn;
			a[r].len-=mn;
		}else{
			sum+=min(a[l].len,a[r].len);
			int mn=min(a[l].len,a[r].len);
			a[l].len-=mn;
			a[r].len-=mn;
		}
		if(a[l].len==0){
			l++;
		}
		if(a[r].len==0){
			r--;
		}
	}
	cout<<sum;
	return 0;
}
