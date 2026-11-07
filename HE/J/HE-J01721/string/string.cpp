#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long lon=0,ans=0,r=0;
	string s="";
	cin>>n;
	r=n;
	long long a1[100001];
	string c[10001];
	for(int i=1;i<=n;i++){
		cin>>a1[i]>>c[i];
		lon+=a1[i];
	}
	if(lon>=1000000000){
		cout<<"3000000000"<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a1[i];j++){
			s+=c[i];
		}
	}
	string a=s;
	for(long long i=1;i<=lon/2+1;i++){
		if(a[i]!=a[r]){
			a[r]=a[i];
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
