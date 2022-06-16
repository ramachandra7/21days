long long fun(int X, int N)
{
    if(N==0)return 1;
    long long temp=fun(X,N/2);
    if(N%2==0)
        return temp*temp;
    else
        return X*temp*temp;
}


long long Pow(int X, int N)
{
    // Write your code here. 
    return fun(X,N);
    
}
