#include<bits/stdc++.h>
using namespace std;
long long n,m,t[300005],t2[300005],t3[300005],b;
vector<long long> a(200000005,0);
vector<long long> k(200000005,0);
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int e=1;e<=n;e++){
		b=0;
		for(int i=1;i<=n;i++){
			t[a[i]]++;
			if(t[a[i]]==2){
				for(long long j=t2[a[i]];j<i;j++){
					b++;
					t[a[i]]--;
					k[j]=a[j];
					a.pop();
				}
			}else{
				t2[a[i]]=i;
			}
		}
		for(int i=1;i<=n+b;i++){
			t3[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			cout<<a[i]<<' ';
		}
		for(int i=1;i<=n;i++){
			a[i]=k[i];
			k.pop_back();
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<t3[i]<<' ';
	}
	return 0;
}