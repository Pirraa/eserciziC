int g(int n) {
if (n <= 0)
return 1;
else
return g(n + 1) - 1;
}

int main()
{
    g(2);
}