#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)7549;
int zero = 0;
short var_10 = (short)-27159;
unsigned int var_11 = 2256172549U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned short var_9, int zero);

int main() {
    init();
    test(var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
