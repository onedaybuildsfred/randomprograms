#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)4843;
int zero = 0;
long long int var_17 = -3225755584122211726LL;
unsigned long long int var_18 = 3910860875195097840ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned short var_14, int zero);

int main() {
    init();
    test(var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
