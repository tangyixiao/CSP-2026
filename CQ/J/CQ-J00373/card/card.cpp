#include<bits/stdc++.h>
#define wef(i,l,r) for(int i=l;i<=r;i++)
#define few(i,r,l) for(int i=r;i>=l;i--)
#define pii pair<int,int>
#define endl cout<<"\n"
using namespace std;
using ll=long long;
const int N=5e5+5;
int A[N];
int l[N],stk[N],res[N],show[N],top;
bool v[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	vector<int> a(1,0),b(0);
	int n,m,cnt=0;
	cin>>n>>m;
	wef(i,1,n){
		cin>>A[i];
		if(A[i]!=A[i-1]){
			a.push_back(A[i]);
			b.push_back(cnt);
			cnt=0;
		}
		cnt++;
	}
	b.push_back(cnt);
	if(cnt>5000){
		wef(i,1,m) res[i]=res[i-1]+b[i];
		wef(i,1,m) cout<<res[i]<<" ";
		return 0;
	}
	if(m==2){
		int s1=0,s2=0;
		wef(i,1,n){
			if(A[i]==1) s1++;
			else s2++;
		}
		if(A[n]==1) cout<<n<<" "<<s2;
		else cout<<s1<<" "<<n;
		return 0;
	}
	int nn=a.size()-1;
	wef(i,1,nn){
		wef(j,1,m) show[j]=0;
		wef(j,i,nn) l[j]=0,v[j]=0;
		wef(j,i,nn){
			if(show[a[j]]) l[j]=show[a[j]];
			show[a[j]]=j;
		}
		wef(j,i,nn){
			if(v[l[j]]){
				while(top&&stk[top--]!=l[j]){
					v[stk[top]]=0;
				}
			}
			v[j]=1;
			stk[++top]=j;
		}
		while(top){
//			cout<<a[stk[top]]<<" ";
//			cout<<a[stk[top]]<<" ";
			res[a[stk[top--]]]+=b[i];
		}
//		endl;
	}
	wef(i,1,m) cout<<res[i]<<" ";
	return 0;
}
