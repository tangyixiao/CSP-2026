#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+500;
int n,len=0;
struct ac{
	int a;
	char c;
}s[N];
int pre=0,nxt=0,k=1,id=1;
struct ace{
	int sum;
	char judge;
}ans1[N],ans2[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		len+=s[i].a;
	}
	for(int i=1;i<=n;i++){
		if(pre+s[i].a<len/2){
			pre+=s[i].a;
			ans1[id].sum=s[i].a;
			ans1[id].judge=s[i].c;
			id++;
		}else{
			ans1[id].sum=len/2-pre;
			pre+=len/2-pre;
			ans1[id].judge=s[i].c;
			break;
		}
	}
	for(int i=n;i>=1;i--){
		if(nxt+s[i].a<len/2){
			nxt+=s[i].a;
			ans2[k].sum=s[i].a;
			ans2[k].judge=s[i].c;
			k++;
		}else{
			ans2[k].sum=len/2-nxt;
			nxt+=len/2-nxt;
			ans2[k].judge=s[i].c;
			break;
		}
	}
//	cout<<k<<" "<<p;
//	for(int i=1;i<=id;i++){
//		cout<<ans1[i].sum<<" "<<ans1[i].judge<<"\n";
//	}
//	cout<<"\n";
//	for(int i=1;i<=k;i++){
//		cout<<ans2[i].sum<<" "<<ans2[i].judge<<"\n";
//	}
	int i=1,j=1,ans=0;
	while(i<=id&&j<=k){
		if(ans1[i].judge==ans2[j].judge){
			if(ans1[i].sum>ans2[j].sum){
				ans1[i].sum-=ans2[j].sum;
				j++;
			}else{
				ans2[j].sum-=ans1[i].sum;
				i++;
			}
		}else{
			if(ans1[i].sum<ans2[j].sum){
				i++;
				ans+=(ans2[j].sum-ans1[i].sum);
				ans2[j].sum-=ans1[i].sum;
			}else if(ans1[i].sum>ans2[j].sum){
				j++;
				ans+=(ans1[i].sum-ans2[j].sum);
				ans1[i].sum-=ans2[j].sum;
			}else{
				ans+=ans1[i].sum;
				i++,j++;
			}
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

6
100000000000 a
100000000000 a
100000000000 a
100000000000 b
100000000000 b
100000000000 b

2
2 a
3 a
*/
