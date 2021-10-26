long long binpow(long long a, long long b, long long m=1e18) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
// return modinv in log (md) time 
long long modinv (long long a,long long m=md  )
{
  return (binpow(a,m-2,m)); 
}
