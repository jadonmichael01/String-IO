#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylist.h"

/* print the strings (from stdin) in decreasing order; duplicate
   strings are marked accordingly. */

int main()
{
  char buf[256];

  char* str;
  while((str = fgets(buf, 255, stdin)) != NULL) {
    insert(str);
  }
  rev_list();
}

