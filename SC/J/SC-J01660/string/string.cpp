#include<bits/stdc++.h>
using namespace std;
int n;
long long a[300000];
char c[300000];
long long f1,f2,b,e;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%ld %c",&a[i],&c[i]);
	}
    f1=1;f2=n;
    b=a[1];
	e=a[n];
    while(f1<f2){
    	if(c[f1]!=c[f2]){
    		ans=ans+min(e,b);
		}
		if(b>e){
			f2--;
			b=b-e;
			e=a[f2];
		}
		else{
			if(b==e){
				f1++;
				f2--;
				b=a[f1];
				e=a[f2];
			}
			else{
				f1++;
				e=e-b;
				b=a[f1];
			}
		}
	}
    cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}