#include <bits/stdc++.h>
using namespace std;
const int N=1e5+100;
const int K=17;
int st[N][K];
void bld(const vector<int>& a,int n){
    for(int i=0;i<n;i++){
        st[i][0]=a[i];
    }
    for(int k=1;k<=floor(log2(n))+1;k++){
        for(int i=0;i+(1<<k)<=n;i++){
            st[i][k]=st[i][k-1]&st[i+(1<<(k-1))][k-1];
        }
    }
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	 
    int n,m;scanf("%d %d",&n,&m);
    vector<int>a(n);
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    if(n<=1) return 0;
    bld(a,n);
    int mak=0;
    int ans=0;
    while((1<<(mak+1))<=n) mak++;
    for(int k=1;k<=mak;k++){
        int len=1<<k;
        for(int i=0;i+len<=n;i++){
            ans=max(ans,st[i][k]);
        }
    }
    printf("%d\n",ans);
    return 0;
}
