#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1732415338;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)139;
signed char var_11 = (signed char)-1;
int var_12 = -1240643630;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(int var_0, _Bool var_3, _Bool var_8, int zero);

int main() {
    init();
    test(var_0, var_3, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
