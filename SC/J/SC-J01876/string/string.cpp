#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int n;
int a[N];
char c[N];
long long num=0,cnt=0;
int b=0;

int cha(int x){
	int ans=1;
	int numn=0;
	while(numn<x){
		numn+=a[ans++];
	}
	ans--;
	return ans;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		num+=a[i]/2;
		cnt+=a[i]%2;
		if(cnt>=2){num++;cnt=0;}
	}
	long long left=num,right=num+1+cnt;
	//cout<<"left="<<left<<"right="<<right<<endl;
	while(left>=1){
		int l=cha(left--),r=cha(right--);
		if(c[l]!=c[r]){
			b++;
			//cout<<left+1<<' '<<l<<' '<<right+1<<' '<<l<<endl;
		}
	}
	cout<<b;
}










/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/