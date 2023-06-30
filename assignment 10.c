// "FUNCTION"

int main()
{

}

// 1 area of circle
float area(int r)
{
    return 3.14*r*r;
}

// 2 simple interest
float simple_interest(float p,float r,float t)
{
    return p*r*t/100.0;
}

// 3 even  or odd
int even_odd(int n)
{
  if(n%2==0)
     return 1;
  else
     return 0;
}

// 4 first N natural number
void natural_number(int n)
{
    for(int i=1; i<=n ; i++)
        printf("%d ",i);
}

// 5 first N odd natural number
void odd_natural_number(int n)
{
    for(int i=1; i<=n ; i++)
        printf("%d ",2*i-1);
}

// 6 factorial
int factorial(int n)
{
    int f=1;
    for(int i=1; i<=n ; i++)
        f=f*i;
    return f;
}

// 7 combinations
int combi(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));

}

// 8 arrangement
int perm(int n, int r)
{
    return factorial(n)/factorial(n-r);
}

// 9 check contain given digit or not
int digit(int n,int d)
{
   while(n)
   {
       if(d==n%10)
        return 1;
       n/=10;
   }
   return 0;
}//number contain didgit return 1 otherwise return 0

// 10 prime factors
void pfactor(int n)
{
    int i=2;
    while(n)
    {
        if(n%i)
          i++;
       else
      {
        printf("%d ",i);
        n=n/i;
      }
    }
}
/*
second method for factor

void factor(int n)
{
    int i=2;
    while(i<=n)
    {
      if(n%i==0)
      {
             printf("%d ",i);
             n/=i;
             continue;

      }
      i++;
    }
}

*/
