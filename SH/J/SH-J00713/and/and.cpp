//T3 [25,100]
#include<bits/stdc++.h> 
using namespace std;
int a[200100],n,m;
long long kmj[200100][32],kkk[200100];
long long sum,ans=2147483647,maxn=31;
void bi(int n,int k){
	long long l=n,cnt=31;
	while(l>0){
		kmj[k][cnt]=l%2;
		cnt--;
		l/=2;
	}maxn=min(maxn,cnt);
}
//void dfs(int n,int k){
////	
//}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;for(int i=1;i<=n;i++){
    	cin>>a[i];
    	bi(a[i],i);
	}int cnt=0,l=n;
	maxn--;
	if(m==n){
		int ans=2147483647;
		for(int i=1;i<=n;i++) ans&=a[i];
		cout<<ans;
	}
	else{
	while(1){
			for(int i=1;i<=l;i++){
				if(kmj[i][maxn]==1){
					cnt++,kkk[i]=1;
				}
			}//cout<<cnt<<' ';
			if(cnt>=m) break;	
			maxn--;
		}
		for(int i=1;i<=n;i++){
			if(kkk[i]) ans=a[i]&ans;
		}//cout<<ans;
		
	    sort(a+1,a+n+1);
	    cout<<a[n-m+1];
	}
    fclose(stdin);
    fclose(stdout);
    return 0;
}
/*
4
7 6 6 5 5 9 5 9 10 7 
0111
0110
0110
0101
0101
1001
0101
1001
1010
0111
*/
