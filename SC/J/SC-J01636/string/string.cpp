#include<bits/stdc++.h>
#define int long long
using namespace std;

/*
这是什么大模拟
简直就是一坨
*/

struct node{
	int l,r;
	char ch;
};

const int N=2e5+10;
int n,cnt;
pair<int,char> s[N];
node a[N],b[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n;
	int num,sum=0;
	char ch;
	for(int i=1;i<=n;i++){
		cin>>num>>ch;
		if(s[cnt].second==ch) s[cnt].first+=num;
		else s[++cnt]={num,ch};
		sum+=num;
	}
	sum>>=1;
	if(sum==0){
		cout<<"0\n";
		return 0;
	}
	
	int aa=0,bb=0,ss=0;
	for(int i=1;i<=cnt;i++){
		ss+=s[i].first;
		if(ss<=sum){
			a[++aa].l=ss-s[i].first+1;
			a[aa].r=ss;
			a[aa].ch=s[i].second;
			continue;
		}
		//还有剩余
		if(ss-s[i].first<sum){
			a[++aa].l=ss-s[i].first+1;
			a[aa].r=sum;
			a[aa].ch=s[i].second;
		}
		break;
	}
	
	ss=0;
	for(int i=cnt;i>=1;i--){
		ss+=s[i].first;
		if(ss<=sum){
			b[++bb].l=ss-s[i].first+1;
			b[bb].r=ss;
			b[bb].ch=s[i].second;
			continue;
		}
		if(ss-s[i].first<sum){
			b[++bb].l=ss-s[i].first+1;
			b[bb].r=sum;
			b[bb].ch=s[i].second;
		}
		break;
	}

	int cntl=1,cntr=1,ans=0;
	int l1=a[1].l,r1=a[1].r,ch1=a[1].ch;
	int l2=b[1].l,r2=b[1].r,ch2=b[1].ch;
	while(cntl<=aa&&cntr<=bb){
		int dist=min((r1-l1+1),(r2-l2+1));
		if(ch1!=ch2) ans+=dist;
		l1+=dist,l2+=dist;
		if(l1>r1) r1=a[++cntl].r,ch1=a[cntl].ch;
		if(l2>r2) r2=b[++cntr].r,ch2=b[cntr].ch;
	}
	cout<<ans;
	return 0;
}