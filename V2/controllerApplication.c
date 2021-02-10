#include <stdio.h>
#include <po_hi_time.h>

int gps =0;
int ins =0;

void controller_spg (void)
{
  printf ("[%d] Controller\n", milliseconds_since_epoch());
  fflush (stdout);
}

void dataproc_spg (void)
{
  printf ("[%d] DataProcessor\n", milliseconds_since_epoch());
  fflush (stdout);
}

void write_gps (int* value)
{
  int v = *value;
  v++;
  *value = v;
  printf ("Value Write : %d\n", *value);
}

void read_gps (int* value)
{
  printf ("Value: %d\n", *value);
  gps=*value;
}

void write_ins (int* value)
{
  int v = *value;
  v++;
  *value = v;
  printf ("Value Write : %d\n", *value);
}

void read_ins (int* value)
{
  printf ("Value: %d\n", *value);
  gps=*value;
}