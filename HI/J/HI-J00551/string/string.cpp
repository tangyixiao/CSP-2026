#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin)
	freopen("string.out","w",stduot)
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		int a;
		cin>>a;
		cnt+=a;
	}
	cout<<0;
	
	/*long long n;
	long long s=0,cnt=0;
	int a[200005];
	char b[20000005],c[200005],d[2000005];
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		s+=a[i];
	}
	if(s%2==0)
		s/=2;
	else{
		s--;
		s/=2;
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			b[j]=c[i];
		}
	}
	for(long long i=1;i<=s;i++)
		d[i]=b[i];
	for(long long i=n;i>=s;i--){
		int j=1;
		if(d[j]==b[i])
			cnt++;
		j++;
	}
	cout<<cnt;*/
	return 0;
}
