#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,sum;
int a[N];
char c[N];
int i=0,j=0; 
int len1,len2;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}	
	int tmp=0,num=(sum+1)/2;
	while(1){
		i++;
		if(num>tmp&&num<=tmp+a[i]){
			if(num==tmp+a[i]){
				j=i+1;
				if(sum&1)	j=i;
			}	
			else j=i;
			break;
		}
		tmp+=a[i];
	}
//	cout<<i<<' '<<j<<' '<<' '<<tmp<<' ';
	if(sum&1)	len1=num-tmp,len2=tmp+a[i]-num+1;
	else len1=num-tmp,len2=tmp+a[i]-num+(i!=j)?a[j]:0;
//	cout<<len1<<' '<<len2<<' ';
	int ans=(c[i]==c[j])?0:min(a[i],a[j]);
	while(i>=1&&j<=n){
		if(len1<=len2){
			i--;
			if(c[i]!=c[j])	ans+=min(a[i],len2-len1);
			len1+=a[i];
		}
		else{
			j++;
			if(c[i]!=c[j])	ans+=min(len1-len2,a[j]);
			len2+=a[j];		
		}
	}
	cout<<ans;
	return 0;
} 
/*

3
2 a 
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b 

*/
