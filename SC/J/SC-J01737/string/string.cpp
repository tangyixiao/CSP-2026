#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n;
int a[N],s1[N],s2[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i-1]+=a[i];
			i--;
			n--;
		}
		sum+=a[i];
	}
	if(sum%2!=0){
		int sum2=0;
		for(int i=1;i<=n;i++){
			sum2+=a[i];
			if(sum2>=(sum+1)/2){
				a[i]--;
//				cout<<i<<"jkkj\n";
				break;
			}
		}
		sum--;
	}
	if(sum%2==0){
		int sum2=0,k=0,l=0,r=0;
		for(int i=1;i<=n;i++){
			sum2+=a[i];
			if(sum2>=sum/2){
				k=i;
				sum2-=a[i];
				l=sum/2-sum2;
				r=a[i]-l;
			}
			if(l)break;
		}
//		cout<<r<<'\n';
		for(int i=1;i<k;i++){
			s1[i]=s1[i-1]+a[i];
		}
		s1[k]=s1[k-1]+l;
		s2[k]=r;
		for(int i=k+1;i<=n;i++){
			s2[i]=s2[i-1]+a[i];
		}
		int res=0,j=k;
		for(int i=1;i<=k;i++){
			while(s1[i]>=s2[j-1]&&j<=n){
				if(c[i]!=c[j]){
					if(s2[j]>=s1[i]&&s2[j-1]<=s1[i-1])res+=a[i];
					else if(s2[j]<=s1[i]&&s2[j-1]>=s1[i-1])res+=a[j];
					else if(s2[j]>=s1[i-1])res+=s2[j]-s1[i-1];
					else if(s1[i]>=s2[j-1])res+=s1[i]-s2[j-1];
				}
				j++;
			}
			j--;
		}
		cout<<res;
	}
	return 0;
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