#include<bits/stdc++.h>
using namespace std;
long long m,n,a[1000000],sum[1000000];
bool cmp(int x,int y){
	return x<y;
}
int main(){
	cin>>n>>m;
	int maxx=0,num_sum=1;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			string s;
			s=a[i]&a[j];
			int x[100000];
			for(int k=0;k<n;k++){
				x[i]=s[i]-'0';
			}
			long long num=1;
			for(int k=s.length()-1;k>=0;k--){
				sum[num_sum]+=x[k]*num;
				num*=2;
			}
		}num_sum++;
	}
	sort(sum+1,sum+num_sum,cmp);
	cout<<sum[1];
	return 0;
}