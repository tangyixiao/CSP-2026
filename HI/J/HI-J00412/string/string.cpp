#include <bits/stdc++.h>
using namespace std;
int n,cnt,ans;
long long a[200005],ah[200005],sum;
char c[200005],ch[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i] == c[i-1]){
			ah[ans]+=a[i];
		}
		else{
			ans++;
			ah[ans] = a[i];
			ch[ans] = c[i];
		}
	}
	for(int i = 1;i<=(ans+1)/2;i++){
		if(ch[i]==ch[ans-i+1]) {
			if(ah[i]>ah[ans-i+1]) ah[ans-i]-=abs(ah[i]-ah[ans-i+1]);
			else ah[i+1]-=abs(ah[i]-ah[ans-i+1]);
			sum+=abs(ah[i]-ah[ans-i+1]);
		}
		else{
			sum+=max(ah[i],ah[ans-i+1]);
			if(ah[i]>ah[ans-i+1]) ah[ans-i]-=abs(ah[i]-ah[ans-i+1]);
			else ah[i+1]-=abs(ah[i]-ah[ans-i+1]);
		}
	}
	cout<<sum;
}
