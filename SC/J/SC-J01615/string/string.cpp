#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],cnt1,cnt2,flag,s1,s2,m1,m2;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s1+=a[i];
	}
	for(int i=1;;i++){
		if(c[1+m1]!=c[n-m2]){
			s2++;
			flag++;
		}
		if(cnt1==a[1+m1]){
			m1++;
			cnt1=0;
		}
		if(cnt2==a[n-m2]){
			m2++;
			cnt2=0;
		}
		cnt1++;
		cnt2++;
		if(flag*2+1==s1){
			break;
		}
	}
	cout<<s2;
	return 0; 
} 