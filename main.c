#include <stdio.h>

int main(int argc, const char * argv[]) {

#ifdef __STDC_VERSION__
  printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);
#else
  printf("__STDC_VERSION__ not set. Assume ANSI C (C89)\n");
#endif

  return 0;
}
