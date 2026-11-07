# include <bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
long long k1,k2,s,s1,s2,ans=0;
int main(){
	freopen("string.in","r",stdin);// 
	freopen("string.out","w",stdout);// 
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		s+=a[i];
	}
	s1=0;s2=0;k2=n+1;
	for (int i=1;i<=n;i++){
		if (a[i]+s1<=s/2){
			s1+=a[i];
			while (s1>=(s2+a[--k2])){
				s2+=a[k2];
				if (c[k2]!=c[i]){
					ans+=a[k2];
				}
				// cout << i << ' ' << k2  << ' ' << a[k2] << ' ' << ans << endl;
			}
			if (s2<s1 && c[k2]!=c[i]){
				if (s2+a[k2]<=s/2){
					ans+=a[k2];
					s2+=a[k2];
				}
				else{
					ans+=(s/2-s2);
					s2=s/2;
				}
			}
			else if (c[k2]==c[i]){
				a[k2]-=a[i];
				s2+=a[i];
				k2++;
			}
			else{k2++;}
		}
		else{
			s1+=a[i];
			s1=s-s1;
			while(s1>=(s2+a[--k2])){
				s2+=a[k2];
				if (c[k2]!=c[i]){
					ans+=a[k2];
				}
			}
			if (s2<s1 && c[k2]!=c[i]){
				ans+=(s1-s2);
			}
			break;
		}
		
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
5
2 a
8 b
1 c
3 b
2 a

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
