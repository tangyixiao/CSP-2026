#include<bits/stdc++.h> 
using namespace std;
long long n,cnt=0,p=1,f=1;
const int N=2e5+5;
long long a[N],fa[N];
char b[N],fb[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}for(int i=1;i<=n;i++){
		fa[i]=a[n-i+1];
		fb[i]=b[n-i+1];
	}
	while(p<=n&&f<=n){
		if(b[p]!=fb[f]){
			if(a[p]>fa[f]){
				a[p]-=fa[f];
				cnt+=fa[f];				
				f++;				
			}else if(a[p]<fa[f]){
				fa[f]-=a[p];
				cnt+=a[p];				
				p++;
			}else{
				p++;
				cnt+=fa[f];				
				f++;				
			}
		}else{
			if(a[p]>fa[f]){
				a[p]-=fa[f];
				f++;
				
			}else if(a[p]<fa[f]){
				fa[f]-=a[p];
				p++;
			
			}else{
				p++;
				f++;
				
			}
		}
	}cout<<cnt/2;
	return 0;
}