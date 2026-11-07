#include<bits/stdc++.h>
#define LL long long
using namespace std;
string binary(LL a){
	string ans="00000000000000000000000000000000000000000000000000000000000";
	LL p=a+1;
	for(LL i=0;i<62;i++){
		if(p>pow(2,62-i)){
			p-=pow(2,62-i);
			ans[62-i]='1';
		}
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	LL m,n;
	cin>>m>>n;
	LL a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	string b[m];
	for(int i=0;i<m;i++){
		b[i]=binary(a[i]);
	}
	int k[63];
	for(int i=0;i<63;i++)k[i]=0;
	string l;
	for(int i=0;i<m;i++){
		l=b[i];
		for(int j=0;j<=l.size();j++){
			if(l[j]=='1'){
				k[j]++;
			}
		}
	}
	LL sum=0;
	for(int i=0;i<63;i++){
		if(k[i]>=n){
			sum+=pow(2,i);
		}
	}
	cout<<sum;
	return 0;
}
