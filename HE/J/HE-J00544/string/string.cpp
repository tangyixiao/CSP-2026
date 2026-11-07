#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
long long n,ans=0,total=0;
long long a[N];
char c[N];
char cc[1000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("strint.out","w",stdout);
	cin>>n;
	cin>>a[1]>>c[1];
	total+=a[1];
	bool flag=true,flag2=false;
	for(int i=2;i<=n;i++){
		cin>>a[i]>>c[i];
		total+=a[i];
		if(c[i]!=c[i-1])flag=false;
		if(a[i]>=1000000000)flag2=true;
	}
	if(flag){
		cout<<"0";
		return 0;
	}
	if(flag2){
		cout<<total/2;
		return 0;
	}
	int inx=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			cc[inx]=c[i];
			inx++;
		}
	}
	if(inx%2!=0){
		int mid=inx/2+1;
		int l=mid-1,r=mid+1;
		while(l>=1 && r<=inx){
			if(cc[l]!=cc[r])ans++;
			l--,r++;
		}
	}else if(inx%2==0){
		int l=inx/2,r=l+1;
		while(l>=1 && r<=inx){
		
			if(cc[l]!=cc[r])ans++;
			l--,r++;
		}
	}
	cout<<ans;
	return 0;
}
