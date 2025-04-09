
long double Factorial(int num)
{
    long double fact=1;

     for(int i=2;i<=num;i++)
     {
         fact*=i;
     }
 return fact;
}

long double Combinaciones(int n, int r)
{
    long double combinacion;

    combinacion=Factorial(n)/(Factorial(r)*(Factorial(n-r)));
    return combinacion;
}
