char swap(char *x, char *y)
{
    char z = *x;
    *x = *y;
    *y = z;
}
void permutation(char *str, int x, int y)
{

    if (x == y)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = 0; i <= y; i++)
        {
            swap((str + x), (str + i));
            permutation(str, x + 1, y);
            swap((str + x), (str + i));
        }
    }
}

int main()
{
    char str[] = "ABC";

    permutation(str, 0, 2);

    return 0;
}