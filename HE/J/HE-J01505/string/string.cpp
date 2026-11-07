#include<bits/stdc++.h>
using namespace std;
long long a[200005],ra[200005],l,ans;
int n;
char c[200005],rc[200005];
int getlo(long long p){
	long long currl=0;
	for(int i=0;i<n;i++){
		if(currl<=p&&p<currl+ra[i]) return i;
		currl+=ra[i];
	}
	return -1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		ra[n-i-1]=a[i],rc[n-i-1]=c[i];
		l+=a[i];
	}
	long long currl=0;
	for(int i=0;;i++){
		if(currl+a[i]<=(l+1)/2){
			for(long long p=currl;p<currl+a[i];p++){
				int lo=getlo(p);
				if(rc[lo]!=c[i]) ans++;
			}
			currl+=a[i];
		}else{
			for(long long p=currl;p<(l+1)/2;p++){
				int lo=getlo(p);
				if(rc[lo]!=c[i]) ans++;
			}
			break;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
