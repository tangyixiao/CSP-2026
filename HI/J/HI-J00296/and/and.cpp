#include<bits/stdc++.h>
using namespace std;
int aand(int a,int b){
	int c=a,d=b;
	string sa,sb;
	int i=0;
	while(c!=0){
		sa[i]=c%2+'0';
		c/=2;
		i++;
	}
	int lena=i;
	i=0;
	while(d!=0){
		sb[i]=d%2+'0';
		d/=2;
		i++;
	}
	int lenb=i;
	string ab;
	for(int j=0;j<=max(lena,lenb);j++){
		if(sa[j]==sb[j]&&sa[j]=='1'){
			ab[j]='1';
		}
		else{
			ab[j]='0';
		}
	}
	int sum=0;
	for(int j=0;j<=max(lena,lenb);j++){
		sum+=(ab[j]-'0')*pow(2,j);
	}
	return sum;
}
	
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	int sum=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		int l=aand(sum,a[i]);
		sum=l;
	}
	cout<<sum;
	return 0;
}
