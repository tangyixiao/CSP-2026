#include<bits/stdc++.h>
using namespace std;
long long a[200000];
long long len=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	char old_c;
	for(long long i=0;i<n;i++){
		long long z;
		char c;
		cin>>z>>c;
		if(old_c!=c)
		a[len++]=z;
		else
		a[len++]=z+a[len-1];
		for(long long j=0;j<z;j++){
			s+=c;
		}
	}
	//cout<<s;
	s+=' ';
	long long l=0,r=s.size()-2;
	long long cnt=0;
	long long len_l=0;
	long long len_r=n-1;
	while(l<r){
		if(s[l]!=s[l-1]){
			len_l++;
		}
		if(s[r]!=s[r+1]){
			len_r--;
		}
		if(s[l]!=s[r]){
			cnt+=min(a[len_l],a[len_r]);
		}
		l+=min(a[len_l],a[len_r]);
		r-=min(a[len_l],a[len_r]);
	}
	cout<<cnt;
	return 0;
}
