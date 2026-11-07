1include<bits/stdc++.h>//ÀÏÌì±£ÓÓ£¡  
using namespace std;
int a[200005],n;
long long ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int y=n;
	for(int i=1;i<=n;i++){
		if(i>=y){
			break;
		}
		if(c[i]!=c[y]){
			if(a[i]>a[y]){
				ans+=a[y];
				a[i]-=a[y];
				i-=1;
			}else if(a[i]<a[y]){
				ans+=a[i];
				a[y]-=a[i];
				y+=1;
			}else{
				ans+=a[i];
			}
		}else{
			if(a[i]>a[y]){
				a[i]-=a[y];
				i-=1;
			}else if(a[i]<a[y]){
				a[y]-=a[i];
				y+=1;
			}
		}
		y-=1;
	}
	cout<<ans;
	return 0;
}
