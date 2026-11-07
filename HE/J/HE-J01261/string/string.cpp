#include<bits/stdc++.h>
using namespace std;
struct s{
	long long m;
	char a;
};
long long n,q=1,ans,c=1;
string sz1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	s sz[n+1];
	for(long long i=1;i<=n;i++){
		cin >> sz[i].m >> sz[i].a;
		for(long long j=q;j<=sz[i].m+q-1;j++){
			sz1[j]=sz[c].a;
		}
		c++;
		q+=sz[i].m;
	}
	for(long long i=1;i<q;i++){
		if(i>=(q-i)){
			break;
		}
		if(sz1[i]!=sz1[q-i]){
			sz1[q-i]=sz1[i];
			ans++;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdin);
	return 0;
}
