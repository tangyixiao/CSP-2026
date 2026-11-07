#include<iostream>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n,a[N];
ll cnt;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]!=c[i-1] && i>1)f=0;
	}
	if(f){
		cout<<0;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	int l=1,r=n,ta=0;
	char tc;
	while(l<=r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				cnt+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				cnt+=a[l];
				l++,r--;
			}else{
				cnt+=a[l];
				a[r]-=a[l];
				l++;
			}
		}else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]==a[r]){
				l++,r--;
			}else{
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<cnt;
	/*string s=" ";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++)s=s+c[i];
	}
	int l=s.size()-1;
	for(int i=1;i<=l/2;i++){
		if(s[i]!=s[l+1-i])cnt++;
	}
	cout<<cnt;*/
	fclose(stdin);
	fclose(stdout);
	return 0;
}
