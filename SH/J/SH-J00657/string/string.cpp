#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
struct node{
	int m;
	char c;
};
node a[N];
vector<node> l,r;
int l1,l2,n,sum=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		sum+=x;
		a[i].m=x;
		a[i].c=y;
	}
	int lmax=sum/2,cnt=0,flag=0;
	for(int i=1;i<=n;i++){
		cnt+=a[i].m;
		if(cnt<lmax){
			l1++;
			l.push_back(a[i]);
		}
		if(cnt==lmax){
			l.push_back(a[i]);
			l1++;
			flag=1;
			if(a[i+1].m==1&&sum%2!=0){
				i++;
				continue;
			}
			else if(sum%2!=0){
				a[i+1].m--;
			}
		}
		else if(cnt>lmax){
			if(flag){
				l2++;
				r.push_back(a[i]);
			}else{
				l1++;
				l.push_back({a[i].m-(cnt-lmax),a[i].c});
				l2++;
				r.push_back({(cnt-lmax,a[i].c)});
				flag=1;
			}
		}
	}
	int p=0,q=l2-1,ans=0;
	while((p<l1-1||q>0)){
		int x=l[p].m,y=r[q].m;
		if(l[p].c==r[q].c){
			if(x>y){
				l[p].m-=y;
				q--;
			}else if(x==y){
				p++;q--;
			}else if(x<y){
				r[q].m-=x;
				p++;
			}
		}else{
			if(x>y){
				l[p].m-=y;
				ans+=y;
				q--;
			}else if(x==y){
				p++;q--;
				ans+=x;
			}else if(x<y){
				r[q].m-=x;
				p++;
				ans+=x;
			}
		}
	}
	if(l[l1-1].c!=r[0].c){
		ans+=l[l1-1].m;
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
