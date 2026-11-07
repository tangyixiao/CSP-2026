#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
long long lenn=0,hl,pos1,pos2,ans,hll;
int a[N];
char c[N];
char search(long long ss){
	long long hll=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			hll++;
			if(hll==ss){
				return c[i];
			}
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		lenn+=a[i];
	}
	if(lenn%2==0){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				hl++;
				if(hl==lenn/2){
					pos1=i;pos2=j;
					break;
				}
			}
		}
		hl=0;
		for(int i=1;i<=pos1;i++){
			for(int j=1;j<=a[i];j++){
				if(i!=pos1 or j<=pos2){
					hl++;
					if(c[i]!=search(lenn-hl+1)) ans++;
				}
			}
		}
	}
	if(lenn%2!=0){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				hl++;
				if(hl==lenn/2+1){
					pos1=i;pos2=j;
					break;
				}
			}
		}
		hl=0;
		for(int i=1;i<=pos1;i++){
			for(int j=1;j<=a[i];j++){
				if(i!=pos1 or j<=pos2){
					hl++;
					if(c[i]!=search(lenn-hl+1)) ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
