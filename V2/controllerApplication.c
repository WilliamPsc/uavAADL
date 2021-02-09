
#include <stdio.h>
#include <po_hi_time.h>

void controller_spg (void)
{
  printf ("[%d] Controller\n", milliseconds_since_epoch());
  fflush (stdout);
}

void dataProc_spg (void)
{
  printf ("[%d] DataProcessor\n", milliseconds_since_epoch());
  fflush (stdout);
}