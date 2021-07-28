int to_Binary(int n)
{
    int a[10],i;

    for(i = 0;n > 0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    printf("n = %d\ni = %d\n",n, i);

    for(i = i - 1; i >= 0; i--)
    {
        printf("%d",a[i]);
    }

    /*for(i = i - 1;i >= 0;i--)
    {
        printf("%d",a[i]);
    }
    return (0);
    */
}
