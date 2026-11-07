#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005],s[200005],flag,f,f2;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if((2<<((int)(log2(a[i]+1))))!=a[i]+1) flag=1;
		if(a[i]!=i-1) f=1;
		if(a[i]>4) f2=1;
		//s[i]=s[i-1]&a[i];
	}
	///*
	if(m==1){
		cout<<max_element(a+1,a+n+1);
		return 0;
	}else if(m==2){
		int maxn=-1000;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
//	/*
	sort(a+1,a+n+1);
	reverse(a+1,a+n+1);
	s[1]=a[1];
	for(int i=2;i<=n;i++){
		s[i]=s[i-1]&a[i];
	}
	if(m==n){
		cout<<s[n];
		return 0;
	}else if(m==n-1){
		int maxn=-100;
		for(int i=1;i<=n;i++){
			maxn=max(maxn,s[n]&a[i]);
		}
		cout<<maxn;
		return 0;
	}else if(flag==0){
		cout<<a[m];
	}else if(f==0){
		cout<<n-m;
	}else if(f2==0){
		int ap[10];
		for(int i=1;i<=n;i++){
			ap[a[i]]++;
		}
		if(m==1){
			for(int i=4;i>=1;i--){
				if(ap[i]){
					cout<<i;
					return 0;
				}
			}
		} 
		int ans;
		if(ap[3]){
			ans=3;
			ap[3]--;
		}else if(ap[2]>ap[1]){
			ans=2;
			ap[2]--;
		}else if(ap[1]>=ap[2]){
			ans=1;
			ap[1]--;
		}else{
			ans=4;
		}
		m--;
		while(m){
			if(ap[3]){
				m--;
				ap[3]--;
			}else if(ans==2){
				if(!ap[2]){
					cout<<0;
					return 0;
				}
				m--;
				ap[2]--;
			}else if(ans==1){
				if(!ap[1]){
					cout<<0;
					return 0;
				}
				m--;
				ap[1]--;
			}else{
				if(ans==3){
					if(ap[2]>ap[1]){
						ans=2;
						ap[2]--;
					}else if(ap[1]>=ap[2]){
						ans=1;
						ap[1]--;
					}
					m--;
				}else{
					if(ap[4]){
						m--;
						continue;
					}
					cout<<0;
					return 0;
				}
			}
		}
		cout<<ans;
		return 0;
	}else{
		int maxn=-100;
		for(int i=((2<<m)-1);i<=(2<<n)-1;i++){
			int p=i;
			string s=" ";
			vector <int> v;
			while(p){
				s.push_back(p%2);
				p/=2;
			}
			reverse(s.begin(),s.end());
			for(int i=1;i<=s.size()-1;i++){
				v.push_back(i);
			}
			int ans=-1;
			for(auto c:v){
				if(ans==-1) ans=a[c];
				else{
					ans&=a[c];
				}
			}
			maxn=max(maxn,ans);
		}
		cout<<maxn;
	}
//	*/
}
/*游记：
估分 
T1 100 
T2 100
T3 45-70
T4 40-64
sum:285-334
希望能估对 
我还是太蒻了
florr名=洛谷 uid=1629090
lv102
想退florr了 
努力冲OI
钓个鱼吧：
freopen("add.in","r",stdin);
freopen("add.out","w",stdout);
freopen("and.in","w",stdin);
freopen("and.out","r",stdout);
freopen("and.out","w",stdin);
hhh
我重生了，重生到了csp-j赛场，这一世，我一定要上迷惑行为大赏！！！ 
一等分数线预测：265
二等：180
三等：130
纯瞎猜的 
*/
 
