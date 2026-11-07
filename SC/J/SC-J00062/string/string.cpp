#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],mid,ans;
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int nn=1;
	cin>>a[nn];
	cin>>b[nn];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
		if(b[i]==b[nn]) a[nn]+=a[i];
		else{
			nn++;
			b[nn]=b[i];
			a[nn]=a[i];
		}
	}
	n=nn;
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" "<<b[i];
//		cout<<endl;
//	}
	long long q=1,w=n,e=a[1],r=a[n];
	while(q<=w){
		if(b[q]!=b[w]){
			if(e==r){
				ans+=e;
				q++;
				w--;
				e=a[q];
				r=a[w];
//				cout<<ans<<" "<<q<<" "<<w<<" 1 ";
			}
			else if(e<r){
				ans+=e;
				q++;
				r-=e;
				e=a[q];
//				cout<<ans<<" "<<q<<" "<<w<<" 2 ";
			}
			else if(e>r){
				ans+=r;
				w--;
				e-=r;
				r=a[w];
//				cout<<ans<<" "<<q<<" "<<w<<" 3 ";
			}
		}
		else{
			if(e==r){
				q++;
				w--;
			}
			else if(e<r){
				q++;
				r-=e;
				e=a[q];
			}
			else if(e>r){
				w--;
				e-=r;
				r=a[w];
			}
		}
	}
	cout<<ans;
	return 0;
}