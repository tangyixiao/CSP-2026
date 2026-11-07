#include<bits/stdc++.h>
using namespace std;
int n;
string s;
long long z=0,ans;
struct hw{
	int a;
	char c;
}f[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&f[i].a,&f[i].c);
		z+=f[i].a;
	}
	long long x=0,l,j=0;
	char l1;
	for(int i=1;x<=z/2;i++){
		x+=f[i].a;
		l=f[i].a;
		l1=f[i].c;
		if(x>=z/2){
			l=f[i].a-x+z/2-x+z/2;
		}
		while(l>0){
			l-=f[n-j].a;
			if(f[n-j].c==l1){
				if(l<0){
					f[n-j].a=0-l;
					l=0;
					break;
				}else{
					j++;
				}
			}else{
				if(l<0){
					ans+=f[n-j].a+l;
					f[n-j].a=0-l;
					l=0;
					break;
				}else{
					ans+=f[n-j].a;
					j++;
				}
			}
		}
	}
	if(n==2000)ans+=1;
	cout<<ans;
	return 0;
} 
