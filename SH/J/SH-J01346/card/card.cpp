//10:02创建
#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],cnt;
bool check[200005];
vector<int> q;
//10:10艰苦朴素永不忘！
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(check[a[j]]){
				q.clear();
				q.push_back(a[j]);
			}
			else {
				q.push_back(a[j]);
				check[a[j]]=1;
			}
			if(check[j]) cnt++;
		}
		printf("%d ",cnt);
	}
}
//100+50+35+65=250pts
/*(上接and)
春江花朝秋月夜，往往取酒还独倾
岂无山歌与村笛，呕哑嘲哳难为听
今夜闻君琵琶语，如听仙乐耳暂明

莫辞更作弹一曲，为君翻作琵琶行
感我此言良久立，却坐促弦弦转急
凄凄不似向前声，满座重闻皆掩泣
座中泣下谁最多，江州司马青衫湿。
10:51 休息完毕
至少O(n^2-n),我O(n^3)
10:55 debug一下
10:46(NOI Linux 19:46) check again,no problem.
freopen correct
file correct
code? not enough time
I am going to upload the code.*/
