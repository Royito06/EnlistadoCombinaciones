
long long Factorial(int num)
{
    long long fact=1;

     for(int i=2;i<=num;i++)
     {
         fact*=i;
     }
 return fact;
}

long long Combinaciones(int n, int r)
{
    long long combinacion;

    combinacion=Factorial(n)/(Factorial(r)*(Factorial(n-r)));
    return combinacion;
}
