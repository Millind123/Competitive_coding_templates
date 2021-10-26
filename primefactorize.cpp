vl primes ;
void prime (int limit )
{
//  fills vl primes with all prime number less than some limit !!
//  for constraints n <= 1e9 use limit  = 31625 (which is some delta >sqrt(1e9)!!)
  int a[limit+3]={0};
  for (int i = 2;i<=limit;i++)
  {if (a[i]==0)
  {       for (ll j = 1LL*i*i ;j<=limit;j+=i)
          {a[j]=1;}

  }
  if ((a[i]==0))
  primes.pb (i);
  }
}

vector <ll> prime_fact (int n)  
{vector <ll> prime_facts ;
  /// u have to GENERATE PRIME NUMBERS IN MAIN till sqrt of n using the above function 
  for (auto p : primes)
  { if (p*p>n)
        break;

    while (n%p==0)
    {prime_facts.pb (p);n/=p;}

  }
  if (n!=1)
  prime_facts.pb (n);
  
return prime_facts ;

}

