
char f(char *s)
{
    int i,*p=(int*)s;
    char *q;
    int a=*p;
    int c=(char)a;
    p++;
    q=(char*)p;
    return *q;
}

int main()
{
    f("Milano");
}