/* version 0.0   D.C. Radford    July 1999 */

#include <stdio.h>

int main (int argc, char **argv)
{
  extern int cask(char *, char *, int);
  extern int gfexec(char *, int);
  extern int gfinit(int argc, char **argv);
  int  nc;
  char ans[80];

  /* welcome and get initial data */
  gfinit(argc, argv);

  while (1) {
    /* decode and execute commands */
    if ((nc = cask("?", ans, 80)) > 1) gfexec(ans, nc);
  }
} /* main gf3 */
