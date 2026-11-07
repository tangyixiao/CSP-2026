#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,c;
	long long n,cnt=0,l,r;
	cin>>n;
	long long a[n+5];
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c;
		s+=c;
	}
	l=a[0];
	r=a[n-1];
	for(long long i=0,j=n-1;i!=j;i++,j--){
		if(s[i]!=s[j]){
			if(l>r){
				l-=r;
				cnt+=r;
				r=a[j-1];
				i--;
			}else{
				r-=l;
				cnt+=l;
				l=a[i+1];
				j++;
			}
		}else{
			if(l>r){
				l-=r;
				r=a[j-1];
				i--;
			}else{
				r-=l;
				l=a[i+1];
				j++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}