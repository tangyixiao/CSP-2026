#include <iostream>
#include <climits>
#include <cstdio>
#include <vector>
using namespace std;
long long n;
long long sum;
vector<pair<int,long long> >v;
long long g;
long long ans;
long long bbb,eee;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	cin.tie(0),cout.tie(0),ios::sync_with_stdio(false);
	cin >> n;
	eee=n-1;
	for(int i=1; i<=n; i++)
	{
		long long a;
		char c;
		cin >> a >> c;
		sum+=a;
		v.push_back({int(c),a});
	}
	g=sum/2;
	long long k=0,x=-1;
	for(int i=0; i<v.size(); i++)
	{
//		cout << k << " " <<i << " "<< v[i].second << " " << g << " " << x<< endl;
		k+=v[i].second;
		x++;
//		cout << (k-g>=0) << endl;;
		if(k-g==0)
		{
//			cout << "\nout\n";
			break;
		}
		if(k-g>0)
		{
			x--;
			break;
		}
	}
//	cout << "success\n" << v.size() <<" " << v[n-1].first<< endl;
//	cout << "success\n";
	auto f=v[bbb],l=v[n-1];
//	cout << "success\n" << endl;
//	cout << (x-bbb>=0) << endl;
	while(true)
	{
		f=v[bbb];l=v[eee];
//		cout << bbb << " " <<eee << " "<< x << " " << char(f.first) << f.second << " " << char(l.first) << l.second<< endl;
//		cout << bbb << " " << x << " " << f.first << "\n";
		if(f.first==l.first)
		{
//			cout << "bbb=" << bbb << "   eee=" << eee << " " << f.second << (char)f.first << " " << l.second << (char)l.first << endl;
			if(f.second<l.second)bbb++,v[eee].second-=f.second;
			else if(f.second==l.second)bbb++,eee--;
			else if(f.second>l.second)eee--,v[bbb].second-=l.second;
//			cout << "bbb=" << bbb << "   eee=" << eee << " " << f.second << (char)f.first << " " << l.second << (char)l.first << endl;
		}
		else
		{
//			cout << "bbb=" << bbb << "   eee=" << eee << " " << f.second << (char)f.first << " " << l.second << (char)l.first << endl;
			if(f.second<l.second){bbb++,v[eee].second-=f.second,ans+=f.second;} 
			else if(f.second==l.second){bbb++,eee--,ans+=f.second;}
			else if(f.second>l.second){eee--,v[bbb].second-=l.second,ans+=l.second;} 
//			cout << "bbb=" << bbb << "   eee=" << eee << " " << f.second << (char)f.first << " " << l.second << (char)l.first << endl;
		}
		if(eee-bbb<=0)break;
	}
	cout << ans << endl;
	return 0;
}
