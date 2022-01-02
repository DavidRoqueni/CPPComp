#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,string> pss;
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define For(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define each(x, a) for (auto& x: a)
#define MAX(a,b) a=max(a,b)
#define MIN(a,b) a=min(a,b)
#define SQR(x) ((ll)(x)*(x))
#define pb push_back
#define vt vector
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()

void solve(){
	int n;cin>>n;
	vt<pii> a(n);
	For(n){
		int ii, iii;
		cin>>ii>>iii;
		a[i]={ii,iii};
	}
	auto p = [&](int x ){
		int count = 0;
		for(ll i = 0; i <n;i++){
			if(x-1-a[i].first<=count && count<=a[i].second)count++;
		}
		return count>=x;
	};
	int l = 1, r = n;
	int ans = 0;
	while(l<=r){
		int m = l+(r-l)/2;
		if(p(m)){l=m+1;MAX(ans,m);}
		else r=m-1;
	}
	cout<<ans;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int t;
	cin>> t;
	while(t--){
		solve();cout<<"\n";
	}
}


