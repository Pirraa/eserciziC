int g(int* p) {
return (*p)++;
}

int main() {
int a = 1, b = 0;
b += g(&a);
b += a;
return 0;
}