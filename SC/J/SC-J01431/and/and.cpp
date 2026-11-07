#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int n,m;
int cnt,kk;
int ans[N],sk[N],r[N];
string w;
struct node1{
	int x;
	string y;
}a[N];
struct node2{
	int x;
	string y;
	int len;
}vis[35];
node1 f(int x){
	node1 t;
	t.x=x;
	t.y="";
	while(x){
		t.y=char(x%2+'0')+t.y;
		x>>=1;
	}
	int k=t.y.length();
	while(k<31){
		k++;
		t.y='0'+t.y;
	}
	return t;
}
bool cmp(int x, int y){
	return x>y;
}
bool cmp1(node1 x,node1 y){
	return x.x>y.x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].x);
		a[i]=f(a[i].x);
		for(int j=0;j<=31;j++){
			if(a[i].y[j]=='1'){
				vis[j].x++;
				vis[j].y=vis[j].y+' '+to_string(i);
			}else{
				flag=0;
			}
		}
	}
	if(flag==1){
		sort(a+1,a+1+n,cmp1);
		cout<<a[m].x;
		return 0;
	}
	int wl=0,wt=0;
	for(int i=0;i<=31;i++){
		if(vis[i].x>=m){
			kk=i;
			w=vis[i].y;
			int len=w.length();
			for(int j=0;j<len;j++){
				if(w[j]==' '){
					wl++;
					wt=0;
				}else{
					wt=wt*10+int(w[j]-'0');
				}
				ans[wl]=wt;
			}
			break;
		}
	}
	while(wl!=m&&kk<=31){
		for(;kk<=31;kk++){
			if(vis[kk].x>=m){
				w=vis[kk].y;
				int len=w.length();
				int ss=0;
				wt=0;
				for(int i=0;i<len;i++){
					if(w[i]==' '){
						ss++;
						wt=0;
					}else{
						wt=wt*10+int(w[i]-'0');
					}
					sk[ss]=wt;
				}
				sort(sk+1,sk+1+n);
				int kkkk=0;
				for(int i=1;i<=wl;i++){
					int tt=lower_bound(sk+1,sk+1+wl,ans[i])-sk;
					if(ans[i]!=sk[tt]){
						r[++kkkk]=tt;
					}
				}
				if(wl-kkkk>=m){
					for(int i=1;i<=kkkk;i++){
						ans[r[i]]=0;
					}
				}
			}
		}
	}
	sort(ans+1,ans+1+n,cmp);
	cnt=a[ans[1]].x;
	for(int i=2;i<=m;i++){
		cnt=cnt&a[ans[i]].x;
	}
	cout<<cnt;
	return 0;
}