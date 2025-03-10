// function to find factorial of a given number n
int factorial(int n)
{
    int res = 1;
	//mod 1
	for (int i = 2; i <= n; i++)
        res *= i;	
    return res;
}

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}



