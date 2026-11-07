#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+7;
int n,m,l;
int a[N],tong[N],b[N];
ll ans;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		l=0;
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=l;k++)
			{
				if(b[k]==a[j])
				{
					l=k-1;
					//cout<<l<<endl;
					break;
				}
			}
			b[++l]=a[j];
			
		}
		
		for(int j=1;j<=l;j++)
		{
			tong[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<tong[i]<<" ";
	return 0;
}
//freeopen(
//freopen(
//freoopen(
//这次好难啊
//hi，陌生人
//我也没什么才艺，给你唱首歌吧
/*
kards jin qu 《gou cao de mei fen》
hui jia di yi jian shi
da kai kards jing ji chang
150 jin bi yi ci
wo fei chang dian kuang
de guo zhu guo
fa guo feng guo
san zhang zhe tui tank
hai you fu chong meng bi ke
shei neng ru he wo
zheng zi xun zhao di ren
wo cao wan dan
就到这里吧

kards ID:鼠鼠军团#2949
luogu:turing_wanba
*/