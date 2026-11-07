#include<bits/stdc++.h>
using namespace std;
int a[2*100000+10];
char c[2*100000+10];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int mid=(1+n)/2;
	int num=0,cj=0,s1=a[1],s2=a[n];
	for(int l=1,r=n;l<=mid,r>mid;){
		if(c[l]!=c[r]){
			int mi=min(s1,s2);
			if(mi==s1){
				l++;
				num+=a[l]-cj;
				cj=s2-s1;
				s1=a[l];
				s2=cj;
			}else{
				r--;
				num+=a[r]-cj;
				cj=s1-s2;
				s2=a[r];
				s1=cj;
			}
		}else{
			int mi=min(s1,s2);
			if(s2>s1){
				l++;
				cj=s2-s1;
				s1=a[l];
				s2=cj;
			}else if(s2<s1){
				r--;
				cj=s1-s2;
				s2=a[r];
				s1=cj;
			}
			else{
				l++;
				r--;
				cj=0;
				s1=a[l];
				s2=a[r];
			}
		}
	}
	cout<<num;
	return 0;
}
