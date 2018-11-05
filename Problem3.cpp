#include<bits/stdc++.h>

using namespace std;

int main(){


	unsigned long long n = 600851475143ULL; 
 	unsigned long long i;

 	for(auto i = 2;i< sqrt(n); i++)
	{
    if (n%i==0)
      n /= i;
 	}

 	printf("The largest prime factor is %llu\n", n);
      
return 0;
}



