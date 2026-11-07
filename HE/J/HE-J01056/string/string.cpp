#include<bits/stdc++.h>
using namespace std;
long long ans=0;
long long n,a[200005],b[200005];	
string s="";
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int flag=0;
	for(long long i=0;i<n;i++){
		if(a[i]!=a[n-i-1]){
			flag=1;
			break;
		}
	}
	//cout<<flag<<" ";
	if(flag==0){
		for(long long i=0;i<n;i++){
			s+=c[i];
		}
		long long len=s.size();
		//cout<<len<<endl;
		for(long long i=0;i<len/2;i++){
			if(s[i]!=s[len-i-1]){
				//cout<<s[i]<<" "<<s[len-i-1]<<endl;
				ans+=a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	
	
	else if(flag==1){
		for(long long i=0;i<n/2;i++){
			if(a[i]<a[n-i-1]){
				b[i]=1;
				b[n-i-1]=a[n-i-1]-a[i]+1;
			}
			else if(a[i]>a[n-i-1]){
				b[i]=a[i]-a[n-i-1]+1;
				b[n-i-1]=1;
			}
			else if(a[i]==a[n-i-1]){
				b[i]=1;
				b[n-i-1]=1;
			}
		}
		for(long long i=0;i<n;i++){
			for(long long j=0;j<b[i];j++){
				s+=c[i];
			}
		}
		long long len=s.size();
		//cout<<s<<" ";
		for(long long i=0;i<len/2;i++){
			if(s[i]!=s[len-i-1]){
				ans+=min(a[i],a[len-i-1]);
			}
		}
		cout<<ans;
		return 0;	
	}
	
	return 0;
}
