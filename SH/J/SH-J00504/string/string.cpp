#include<bits/stdc++.h>
using namespace std;
char aa[2000006];
long long ans,a[2000006];
char bb[2000006];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	queue <char> b;
	for(long long i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		if(x>=2000){
            a[i]=x;
            bb[i]=y;
            continue;
		}
		for(long long j=1;j<=x;j++){
			b.push(y);
		}
		a[i]=x;
		bb[y]=x;
	}
	int ii=0;
	while(!b.empty()){
		aa[ii]=b.front();
		b.pop();
		ii++;
	}
	if(a[1]>=2000){
		long long l;
		if(n%2==1)l=n-1;
		else l=n;
        for(int i=1;i<=l/2;i++){
            if(a[i]==a[n-i+1]){
                if(bb[i]==bb[n+1-i])continue;
                else ans+=a[i];
            }else if(bb[i]==bb[n+1-i]){
                int num=abs(a[i]-a[n-i+1]);
                ans+=num;
                if(a[i]>a[n-i+1]){
                    a[i]-=num;
                    a[n-i+1]=0;
                    i--;n--;
                }else {
                    a[n-i+1]-=num;
                    a[i]=0;
                    i++;
                }
            }
        }
        cout<<ans;
        return 0;
	}
	for(long long i=0;i<=(ii-1)/2;i++){
		if(aa[i]!=aa[ii-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
