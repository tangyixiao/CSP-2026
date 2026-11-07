#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;
	string s=" ";
	for(int i=1;i<=n;i++){
		int a;char c;
		cin>>a>>c;
		sum+=a;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	long long ans=0;
	if(sum%2==0){
		long long l=0,r=0;
		l=sum/2;r=sum/2+1;
		string s1=" ",s2=" ";
		for(int i=1;i<=l;i++){
			s1+=s[i];
		}
		for(int i=sum;i>=r;i--){
			s2+=s[i];
		} 
		for(int i=1;i<=l;i++){
			if(s1[i]!=s2[i]){
				ans++;
			}
		}
	}else{
		long long mid=(sum+1)/2;
		long long l=mid-1,r=mid+1;
		string s1=" ",s2=" ";
		for(int i=1;i<=l;i++){
			s1+=s[i];
		}
		for(int i=sum;i>=r;i--){
			s2+=s[i];
		} 
		for(int i=1;i<=l;i++){
			if(s1[i]!=s2[i]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}