#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)59726;
int zero = 0;
int var_11 = 1537247423;
signed char var_12 = (signed char)-75;
long long int var_13 = -251421367835613336LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned short var_10, int zero);

int main() {
    init();
    test(var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
