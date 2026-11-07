#include<bits/stdc++.h>
using namespace std;
int n;
long long l=0,ans=0;
struct aoi{
	int l;
	char x;
}s[200050];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	char pp;
	for(int i = 1;i <= n;i++){
		scanf("%d%c%c",&s[i].l,&pp,&s[i].x);
	}
	int i = 1,j=n;
	while(i<j){
//		if(n%2==0){
//			if(i+1==j) break;
//		}else{
//			if(i==j) break;
//		}
		if(s[i].l==s[j].l){
			if(s[i].x!=s[j].x) ans+=s[i].l;
			i+=1,j-=1;
		}else if(s[i].l>s[j].l){
			if(s[i].x!=s[j].x) ans+=s[j].l;
			s[i].l-=s[j].l;
			j--;
		}else{
			if(s[i].x!=s[j].x) ans+=s[i].l;
			s[j].l-=s[i].l;
			i++;
		}
	}
	printf("%lld\n",ans);
	return 0;
}

