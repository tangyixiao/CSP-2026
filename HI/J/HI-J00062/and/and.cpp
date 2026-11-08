#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[200005],b[200005],re[35],cnt=0;
	for(int i=1;i<=30;i++){
		re[i]=pow(2,i);
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int j=29;
		while(a[i]>0){
			if(a[i]>=re[j]){
				a[i]-re[j];
				b[i]++;
			}
			j--;
		}
	}
	sort(b+1,b+n+1);
	cnt=n;
	int i=n-1;
	for(int j=2;j<=m;j++){
		cnt=(cnt&a[i]);
		i--;
	} 
	cout<<cnt;
	return 0;
}
