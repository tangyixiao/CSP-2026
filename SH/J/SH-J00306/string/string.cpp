#include<bits/stdc++.h>
using namespace std;
struct STR{
	int a;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	scanf("%d",&n);
	STR s[200005];
	for(int i=1;i<=n;i++) scanf("%d %c",&s[i].a,&s[i].c);
	int le=1,ri=n;
	while(le<=ri){
		if(s[le].c==s[ri].c){
			if(s[le].a==s[ri].a) le++,ri--;
			else if(s[le].a>s[ri].a) s[le].a-=s[ri].a,ri--;
			else s[ri].a-=s[le].a,le++;
		}
		else{
			if(s[le].a==s[ri].a) ans+=s[le].a,le++,ri--;
			else if(s[le].a>s[ri].a) s[le].a-=s[ri].a,ans+=s[ri].a,ri--;
			else s[ri].a-=s[le].a,ans+=s[le].a,le++;
		}
	}
	printf("%lld",ans);
	return 0;
}
//造数据：5 17 a 25 b 99 c 17 b 25 a
//cout<<"同"<<' '<<le<<' '<<ri<<' '<<ans<<'\n';
//cout<<"异"<<' '<<le<<' '<<ri<<' '<<ans<<'\n';
