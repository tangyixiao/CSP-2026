#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
long long ans,num;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if(n==1){
		cout << "0";
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		ans+=a[i];
	}
	int h=ans/2;
	int j=n;
    for(int i=1,z=0;i<=n&&z<=h;)
	{
		a[i]=min(h-z,a[i]);
		if(c[i]!=c[j])
		{
			num+=min(a[i],a[j]);
		}
		z+=min(a[i],a[j]);
		if(a[j]<a[i]){
			a[i]-=a[j];
		    j--;
		}
		else if(a[j]>a[i]){
		    a[j]-=a[i];
		    i++;
		}
		else{
			i++;
			j--;
		}
	}
	cout << num;
	return 0;
}
