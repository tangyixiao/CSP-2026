#include<bits/stdc++.h>
using namespace std;
struct st{
	long long  a;
	char b;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	st x[100000];
	long long n,sum=0,ans=0;
	string s="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].b;
		sum+=x[i].a;
		for(int j=1;j<=x[i].a;j++){
			s=s+x[i].b;
		}
	}for(int i=1;i<=sum/2;i++){
		if(x[i].b!=x[sum-i+1].b){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
