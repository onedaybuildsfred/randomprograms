/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 2542094825
Invocation: ./yarpgen --std=c -o out/206
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(long long int var_1, unsigned long long int var_3, int var_6, short var_8, long long int var_10, long long int var_11, short var_12, int zero) {
    var_16 -= ((/* implicit */unsigned int) ((unsigned short) ((var_11) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_1))));
    var_18 = ((/* implicit */short) max((((/* implicit */int) var_12)), (var_6)));
}
