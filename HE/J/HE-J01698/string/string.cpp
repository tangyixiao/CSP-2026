#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0,sum=0,l=1;
string s;
struct{
	long long b,e;
	char z;
}num[200005];
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		num[i].b=l-1;
		num[i].e=l+a-2;
		num[i].z=c;
		l+=a;
		cnt+=1;
	}
	l-=1;
	for(int i=0;num[i].b<l/2+1;i++){
		for(int j=cnt-1-i;num[j].e>=l-1-num[i].e;j--){
			if (num[j].z!=num[i].z){
				sum+=num[j].e-num[j].b+1;
			}
		}
	}
	cout<<sum;
	return 0;
}
