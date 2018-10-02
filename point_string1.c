/*
 * Contents: This file contains some string copying routines.
 * Authors: Brian W. Kernighan and Dennis M. Ritchie (1988); 
            and Jyrki Katajainen (1998)
 * Copyright by the authors
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* 
 * Source: Kernighan & Ritchie, The C Programming 
 * Language, 2nd Edition, Prentice Hall PTR, 1988, 
 * p. 106
 *
 * strcpy: copy t to s; array subsrcipt version
 */

void strcpy0(char *s, char *t) 
{
  int i;

  i = 0;
  while ((s[i] = t[i]) != '\0')
    i++;
}

/* 
 * Source: Kernighan & Ritchie, The C Programming 
 * Language, 2nd Edition, Prentice Hall PTR, 1988, 
 * p. 106
 *
 * strcpy: copy t to s; pointer version 1
 */

void strcpy1(char *s, char *t) 
{
    while ((*s = *t) != '\0') {
        s++;
	t++;
    }
}

/* 
 * Source: Kernighan & Ritchie, The C Programming 
 * Language, 2nd Edition, Prentice Hall PTR, 1988, 
 * p. 105
 *
 * strcpy: copy t to s; pointer version 2
 */

void strcpy2(char *s, char *t) 
{
  while ((*s++ = *t++) != '\0')
    ;
}

/* 
 * Source: Kernighan & Ritchie, The C Programming 
 * Language, 2nd Edition, Prentice Hall PTR, 1988, 
 * p. 106
 *
 * strcpy: copy t to s; pointer version 3 
 */

void strcpy3(char *s, char *t) 
{
  while (*s++ = *t++)
    ;
}

/*
 * stringcopy: copy t to s; with a while loop
 */

char *stringcopy0(char *s, const char *t) {
  char *r = s;

  while (*t != '\0') {
    *r = *t;
    r = r + 1; t = t + 1;
  }
  *r = '\0';
  return s;
}

/*
 * stringcopy: copy t to s; with an infinite while loop
 */

enum bool {false, true};
#define loop while(true)

char *stringcopy1(char *s, const char *t) {
  char *r = s;

  loop {
    *r = *t;
    if (*t == '\0') break;
    r = r + 1; t = t + 1;
  }
  return s;
}

#undef loop

/*
 * stringcopy: copy t to s; with an infinite for loop
 */

#define loop for( ; ; )

char *stringcopy2(char *s, const char *t) {
  char *r = s;

  loop {
    *r = *t;
    if (*t == '\0') break;
    r = r + 1; t = t + 1;
  }
  return s;
}

#undef loop

const int n = 1000000;
const int KRroutines = 4;
const int myroutines = 4;

typedef void KRroutine(char *, char *);
KRroutine *KRcopy[] = {strcpy0, strcpy1, strcpy2, strcpy3};
char *KRname[] = {"strcpy0", "strcpy1", "strcpy2", "strcpy3"};

typedef char *myroutine(char *, const char *);
myroutine *mycopy[] = {stringcopy0, stringcopy1, stringcopy2, strcpy};
char *myname[] = {"stringcopy0", "stringcopy1", "stringcopy2", "strcpy"};

int main(void) {
 
  clock_t c_time;
  int  i, j;
  char *b, *c;

  b = (char*) malloc(n * sizeof(char));
  assert(b != NULL);
  c = (char*) malloc(n * sizeof(char));
  assert(c != NULL);

  for(i = 0; i < KRroutines; i++) {
    for(j = 0; j < n; j++) { b[j] = 'b'; c[j] = 'c'; } 
    c[n - 1] = '\0';
    printf("Testing routine %s ...\n", KRname[i]);
    c_time = clock();
    KRcopy[i](b, c);
    c_time = clock() - c_time;
    for(j = 0; j < n; j++) assert(b[j] == c[j]);
    printf("  Copying time (ms): %ld\n", c_time/1000);
  }

  for(i = 0; i < myroutines; i++) {
    for(j = 0; j < n; j++) { b[j] = 'b'; c[j] = 'c'; } 
    c[n - 1] = '\0';
    printf("Testing routine %s ...\n", myname[i]);
    c_time = clock();
    b = mycopy[i](b, c);
    c_time = clock() - c_time;
    for(j = 0; j < n; j++) assert(b[j] == c[j]);
    printf("  Copying time (ms): %ld\n", c_time/1000);
  }

  free(b); free(c);
  return 0;
}
