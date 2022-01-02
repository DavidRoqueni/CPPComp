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

vt<ll> h;
ll sum = 0;
void solve(){
	ll n, s;
	cin>>n>>s;
	int i = lower_bound(all(h),n)-h.begin();
	ll o = 2e18;
	if(i>0)MIN(o,(n-h[i-1])+max(0ll,s-sum+h[i-1]));
	if(i<sz(h))MIN(o,max(0ll,s-sum+h[i]));
	cout<<o;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int n; 
	cin>>n;
	h.resize(n);
	For(n) cin>>h[i];
	sort(all(h));
	sum = accumulate(all(h),0LL);
	int t;
	cin>> t;
	while(t--){
		solve();cout<<"\n";
	}
}


