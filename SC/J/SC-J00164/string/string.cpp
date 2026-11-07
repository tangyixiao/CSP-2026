#include<bits/stdc++.h> 
using namespace std;
string s;
long long n,c,sum,m;
bool flag;
char a;
void tw(int q){
	string sz,sy;
	sz="0";
	sy="0";
	if(flag==1){
		for (long long i=1;i<=(n-1)/2;i++){
			sz+=s[i];
		}
		for (long long i=n;i>=(n-1)/2+2;i--){
			sy+=s[i];
		}
		for (long long i=1;i<=(n-1)/2;i++){
			if(sz[i]!=sy[i]){
				sum+=1;
			}
		}
		cout<<sum<<endl;
		return;
	}
	for (long long i=1;i<=n/2;i++){
		sz+=s[i];
	}
	for (long long i=n;i>=n/2+1;i--){
		sy+=s[i];
	}
	for (long long i=1;i<=(n-1)/2;i++){
		if(sz[i]!=sy[i]){
			sum+=1;
		}
	}
	cout<<sum<<endl;
	return;
}
int main(){
	cin>>m;
	n=0;
	s="0";
	flag=0;
	sum=0;
	for (long long i=1;i<=m;i++){
		cin>>c>>a;
		n+=c;
		for (long long j=1;j<=c;j++){
			s+=a;
		}
	}
	if(n%2==1){
		flag=1;
	}
	tw(1);
	return 0;
}