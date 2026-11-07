#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;	cin>>n;
	long long cnt=0;
	int d[200005]={0};
	char k[200005];
	for(int i=1;i<=n;i++){
		cin>>d[i];
		cnt+=d[i];
		cin>>k[i];
	}
	if(cnt<=100005){
		string a;
		long long cou=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=d[i];j++){
				a[cou+j]=k[i];
			}
			cou+=d[i];
		}
		int sum=0;
		for(int i=1;i<=cou/2;i++){
			if(a[i]!=a[cou-i]){
				sum++;
			}
		}
		cout<<sum;
		return 0;
	}
	else{
	map<long long,char>a;
	long long cou=0;
	for(int i=1;i<=n;i++){
		for(long long j=1;j<=d[i];j++){
			a[cou+j]=k[i];
		}
		cou+=d[i];
	}
	int sum=0;
	for(int i=1;i<=cou/2;i++){
		if(a[i]!=a[cou-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
	}
} 
