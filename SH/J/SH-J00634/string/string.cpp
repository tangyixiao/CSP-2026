 #include <bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char c[200010];

long long len = 0;
long long ans = 0;

int find(long long x){
	int l = 1,r = n;
	int an = 0;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid]>=x){
			an = mid;
			r = mid-1;
		}else l = mid+1;
	}
	return an;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i] >> c[i];
		int x = a[i];
		a[i]+=len;
		len+=x;
	}
	
	int mid = find( (len+1)/2 );
	
	
	for(int i = 1;i<=mid;i++){
		long long b = len-a[i]+1;
		long long e = len-(a[i-1]+1)+1;
		if(b<(len+1)/2) b = (len+1)/2;
		if(e<(len+1)/2) e = (len+1)/2;
		//cout << b << ' ' << e << endl;//
		
		int begin_i = find(b);
		int end_i = find(e);
		//cout << begin_i << ' ' << end_i << endl;//
		
		for(int j = begin_i; j<=end_i; j++){
			if(c[j]!=c[i]){
				long long sum = 0;
				
				if(a[j-1]+1<=b){
					sum = a[j]-b+1;
				}
				else if(a[j-1]+1>=b && a[j]<=e){
					sum = a[j]-(a[j-1]+1)+1;
				}
				else{
					sum = e-a[j-1]+1;
				}
				
				ans+=sum;
				//cout << sum << endl;//
			}
		}
	}
	
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
