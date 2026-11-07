#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N],las[N],res[N],cnt[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!las[a[i]]) las[a[i]]=i;
		cnt[i]=1;
	}
	for(int i=1;i<=n;i++) cnt[las[a[i]]+1]+=cnt[i],res[a[i]]+=cnt[i];
	for(int i=1;i<=m;i++) cout<<res[i]<<" ";
	return 0; 
}/*lg_751367
When good old friends are going away
Will you wish them to remember your name
When good old days are passing away
Will you promise your heart remains the same
Never can we surspend the time
Having to leave the tracks behind
There's a longer way ahead, after all
There used to be a story teller 
Who always paints the sunshine and the rain
One has to even truly grow up
Spending a lifetime to taste love and pain
Never can we surspend the time
Having to leave the tracks behind
There's longer way ahead, after all
If it's too hard to say goodbye
Give us a try to sing a rhythm
May you the beauty of this world, always shine
*/