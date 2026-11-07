#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+7;

//bool BE=0;
int n;
struct chr{
	int num;
	char c;
} a[N],b[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	int sum=0;
	for(int i=1; i<=n; i++){
		cin>>a[i].num>>a[i].c;
		b[n-i+1]=a[i];
		sum+=a[i].num;
	}
	int mid=sum>>1,cnt=0,pre=0;
	int i=0,j=0;
	while(i<=n && j<=n && pre<mid){
		if(a[i].num==0) i++;
		if(b[j].num==0) j++;
		int len=min(a[i].num, b[j].num);
		if(a[i].c!=b[j].c){
			if(pre+len>mid) cnt+=mid-pre;
			else cnt+=len;
			a[i].num-=len;
			b[j].num-=len;
		}
		else{
			a[i].num-=len;
			b[j].num-=len;
		}
		pre+=len;
	}
//	bool ED=0;
//	cerr<<"Mem: "<<(&ED-&BE)/1024.0/1024.0<<" MB"<<endl;
	cout<<cnt<<endl;
	return 0;
}

