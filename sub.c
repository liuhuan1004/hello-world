int sum(int a, int b)
{
    return a+b;
}

int sub(int a , int b)
{
    return a-b;
}


int max(int a, int b, int c)
{
    int max;
    if (a > b)
        max = a;
    
    if(max < c)
        max = c;
    
    return c;
}


// this is the test  , we must do better in the future.

// error occur