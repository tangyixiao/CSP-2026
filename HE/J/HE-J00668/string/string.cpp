#include<bits/stdc++.h>
using namespace std;
long long a[200005],num,cnt,ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
  	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		num+=a[i];
	}if(num%2==1)
	num=num/2+1;
	else
	num=num/2;
	int i=1,j=n;
	while(cnt<=ans){
		if(c[i]!=c[j]){
			if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}else{
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}else if(i==j)
		break;
		else{
			if(cnt+a[i]>num)
			break;
			else{
				if(a[i]>a[j]){
					a[i]-=a[j];
					cnt+=a[j];
					j--;
				}
				else{
					a[j]-=a[i];
					cnt+=a[i];
					i++;
			}
		}
	}
} cout<<ans<<endl;
	return 0;
}
