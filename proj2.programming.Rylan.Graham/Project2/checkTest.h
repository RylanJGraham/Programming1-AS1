#ifndef CHECKTEST_H
#define CHECKTEST_H

#include <stdio.h>

#define CHECK(ex, res) printf("- %s\t: %s\n", res ?  "OK" : "FAIL", ex)

#endif
