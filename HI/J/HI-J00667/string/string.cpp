#include<bits/stdc++.h>
using namespace std;
long long p[100000005]={0};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	int n;
	cin>>n;
	string b;
	string  c;
	long long num;
	long ans=0;


	
	for(int i=1;i<=n;i++){
		cin>>num;
		cin>>c;
		p[i]=p[i-1]+num ;
		for(int i=0;i<num;i++){
			b+=c[0];
		}
	}

	int changdu=b.size();

	for(int i=0;i<changdu;i++){

		if(b[i]!=b[changdu-i-1]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
