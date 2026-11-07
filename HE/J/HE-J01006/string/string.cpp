#include <bits/stdc++.h>
using namespace std;
int a[200010],a1[200010],a2[200010];
char c[200010],c1[200010],c2[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a11=1,a21=0,mina1=0,mina2=0,ans=0;
	cin >> n;
	long long total=0;
	for(int i=0;i<n;i++){
		cin >> a[i] >> c[i];
		total+=a[i];
		a[i]=total;
	}
	a1[0]=total/2;
	c1[0]=c[0];
	if(total%2==0){
		for(int j=0;j<n;j++){
			if(a[j]<total/2){
				a1[a11]=total/2-a[j];
				c1[a11]=c[j+1];
				a11++;
			}else if(a[j]>total/2){
				a2[a21]=a[j]-total/2;
				c2[a21]=c[j];
				a21++;
			}
		}
	}else{
		for(int k=0;k<n;k++){
			if(a[k]<total/2){
				a1[a11]=total/2-a[k];
				c1[a11]=c[k+1];
				a11++;
			}else{
				a2[a21]=a[k]-total/2-1;
				c2[a21]=c[k];
				a21++;
			}
		}
	}
	sort(a1,a1+a11);
	while(a1[mina1]&&a2[mina2]){
		if(c1[mina1]!=c2[mina2]){
			ans+=abs(a1[mina1]-a2[mina2]);
		}
		if(!a2[mina2+1]){
			mina1++;
		}else if(!a1[mina1+1]){
			mina2++; 
		}else if(a1[mina1+1]<a2[mina2+1]){
			mina1++;
		}else{
			mina2++;
		} 
	}
	cout << ans;
	return 0;
}
