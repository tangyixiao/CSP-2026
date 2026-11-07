#include<bits/stdc++.h>
using namespace std;
int n;
long long lengthall=0;
char cs[200005];
long long lengs[200005];
long long lengsub[200005];
long long llmin(long long a,long long b){
	return a>b?b:a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&lengs[i],&cs[i]);
		lengsub[i]=lengsub[i-1]+lengs[i];
		lengthall+=lengs[i];
	}
	long long pres=0;
	long long ans=0;
	for(int pi=1,pj=n;pi<pj;){
		long long lena=llmin(lengsub[pi],lengthall-lengsub[pj-1]);
		pres+=lena;
		if(cs[pi]!=cs[pj]){
			ans+=lena;
		}
		if(pres*2>=lengthall){
			break;
		}
		if(pres>=lengsub[pi]){
			pi++; 
		}
		if(pres>=lengthall-lengsub[pj-1]){
			pj--;
		}
	}
	printf("%lld",ans);
    return 0;
}
