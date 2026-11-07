#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n;
ll a[N],t[50],ans,nc,L;
char s[N];
queue<char> q;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> s[i];
		L+=a[i];
	}
	for(int i=1;i<=n;i++){
		nc+=a[i];
		if(nc==L/2 && L%2==0){
			break;
		}
		if(nc>L/2){
			if(L%2){
				//cout << "减少了" << i << min(nc-L/2+1,L/2+1-(nc-a[i]+1))*2+1 << endl;
				//cout << "减少后" << a[i] << endl; 
				a[i]-=min(nc-L/2+1,L/2+1-(nc-a[i]+1))*2+1;
				L-=min(nc-L/2+1,L/2+1-(nc-a[i]+1))*2+1;
				break;
			}else{
				//cout << "减少了" << i << min(nc-L/2,L/2+1-(nc-a[i]+1))*2 << endl;
				//cout << "减少后" << a[i] << endl; 
				a[i]-=min(nc-L/2,L/2+1-(nc-a[i]+1))*2;
				L-=min(nc-L/2,L/2+1-(nc-a[i]+1))*2;
				break;
			}
		}
	}
	nc=0;
	L++;
	//cout << L << endl;
	ll sum=0;
	for(int i=1,j=n;i<=j;i++){
		nc+=a[i];
		t[int(s[i]-'a')]+=a[i],sum+=a[i];
		q.push(s[i]);
		//cout << "i:" << i << " j:" << j << "a[i]:" << a[i] << " a[j]:" << a[j] << endl;
		if(nc<=L/2){
			while(a[i]!=0 && a[j]<=a[i]){
				t[int(s[j]-'a')]+=a[j],sum+=a[j];
				q.push(s[j]);
				a[i]-=a[j];
				j--;
			}
			if(a[i]!=0 && a[i]<a[j]){
				t[int(s[j]-'a')]+=a[i],sum+=a[i];
				q.push(s[j]);
				a[j]-=a[i];
			}
			ll maxnum=0;
			while(!q.empty()){
				maxnum=max(maxnum,t[int(q.front()-'a')]);
				t[int(q.front()-'a')]=0;
				//cout << q.front() << " ";
				q.pop();
			}
			ans+=sum-maxnum;
			//cout << sum << " " << maxnum << endl;
		    sum=maxnum=0;
		}else{
			//cout << "i:" << i << " j:" << j << "a[i]:" << a[i] << " a[j]:" << a[j] << endl;
			break;
		}
	}
	cout << ans;
	return 0;
}/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
3
2 a
2 b
1 c
5
2 a
2 b
1 c
2 d
2 e
*/
