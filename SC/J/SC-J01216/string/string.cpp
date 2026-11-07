#include <bits/stdc++.h>
using namespace std;
int n;
const int N=2e5+5;
//struct stg{
//	long long l;char now;
//}a[N],n[N];
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
//	long long sum_len=0;
//	for(int i=1;i<=n;i++){
//		cin>>a[i].l>>a[i].now;
//		sum_len+=a[i].l;
//	}
//	char b=a[1].now;
//	bool f=1;
//	for(int i=1;i<=n;i++){
//		if(a[i].now!=b){
//			f=0;break;
//		}
//	}
//	if(f){
//		cout<<0;
//		return 0;
//	}
//	a[n-i+1] a[]
//	long long new_len=sum_len/2,sum=0,del=0;
//	int cnt=0;f=1;
//	for(int i=1;i<=n;i++){
//		n[n-i+1]=a[i];
//		if(sum>=new_len&&f){
//			cnt=i;f=0;del=sum-new_len;
//		}
//		sum+=a[i].l;
//	}
//	long long d1=0,ans=0;
//	for(int i=1;i<cnt;i++){
//		if(a[i].now!=n[i].now){
//			ans+=min(a[i].l,n[i].l);
//			
//		}
//	}
	long long l;
	string a;
	for(int i=1;i<=n;i++){
		cin>>l>>a;
		while(l--){
			s1+=a;
		}
	}
//	cout<<s1<<"\n";
	int pos=0;
	for(int i=s1.size()-1;i>=0;i--){
		s2[pos++]=s1[i];
	}
//	cout<<s2<<"\n";
	if(s1==s2){
		cout<<0;
		return 0;
	}
	long long ans=0;
	for(int i=0;i<=s1.size()/2;i++){
		if(s1[i]!=s2[i]) ans++;
	}
	cout<<ans;
	return 0;
} 