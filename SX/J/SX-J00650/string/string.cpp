#include<bits/stdc++.h>
using namespace std;

int n,sum,a[200005],s[200005];
char c[200005];
int pyx[30];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
		sum+=a[i];
	}
//	cout<<sum<<endl;
//	for(int i=1;i<=n;i++){
//		cout<<s[i]<<" ";
//	}
//	cout<<endl;
	int now=n,res=0,p=0,x=0;
	while(p<sum/2){
		int ans=lower_bound(s+1,s+n+1,a[now]+p)-s;
		if(ans>x){
			for(int j=x+1;j<=ans;j++){
				pyx[(c[j]-'a'+1)]+=a[j];
			}
			x=ans;
		}
		//s[ans]为锁定的第一个大于等于它的值
		int cc=s[ans]-p;
		cout<<a[now]<<endl;
		if(pyx[(c[now]-'a'+1)]>a[now]){
			pyx[(c[now]-'a'+1)]-=a[now];
			now--;
			p+=a[now];
		}
		else{
			res+=a[now]-pyx[(c[now]-'a'+1)];
			int w=0,o=now;
			while(w<a[now]){
				if((w+a[o])>a[now]){
					w+=(a[now]-w);
					pyx[(c[o]-'a'+1)]-=(a[now]-w);
				}
				else{
					w+=a[o];
					pyx[(c[o]-'a'+1)]-=a[o];
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
/*
3
2 a
2 b
1 c
*/