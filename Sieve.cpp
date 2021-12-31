vt<bool> sieve(ll s){
	vt<bool> a(s,true);
	vt<ll> b;
	vt<ll> c(s);
	a[0] = a[1] = false;
	for(ll i = 2; i<s;i++){
		if(a[i]){
			b.pb(i);
			c[i] = i;
		}

		for(ll j = 0; j < sz(b) && i*b[j]<s && b[j]<=c[i];j++){
			a[i*b[j]] = false;
			c[i*b[j]] = b[j];
		}
	}
	return a;
}
