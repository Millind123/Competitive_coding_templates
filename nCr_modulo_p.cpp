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

const int Nr =  /*??*/    ; //fill this properly by looking in to constraints!!



vector <ll>fac (Nr+1);//copy below code into main !
/* fac[0]=1;fac[1]=1;  for (int i =2;i<=Nr;i++) fac[i]=(fac[i-1]*i)%md;  */

 long long nCr ( long long n,long long r, long long p=md)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 

 
    return (fac[n] * modinv(fac[r], p) % p
            * modinv(fac[n - r], p) % p)
           % p;
}
