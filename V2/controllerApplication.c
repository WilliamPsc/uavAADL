#include <stdio.h>
#include <po_hi_time.h>
#include <stdlib.h> 



int gps = 0;
int ins = 0;
int servo = 0;

void controller_spg (void)
{
  printf ("[%d] Controller\n", milliseconds_since_epoch());
  fflush (stdout);
  servo = (gps + ins) / 2;
}

void dataproc_spg (void)
{
  printf ("[%d] DataProcessor\n", milliseconds_since_epoch());
  printf ("DataProcessor : Valeur servo :%d \n", servo);
  fflush (stdout);
}

void write_gps (int* value)
{
  int v ;

  v = rand()%100;
  *value = v;
  gps = v;
  printf ("Write GPS : %d\n", *value);
}

void read_gps (int* value)
{
  printf ("Read GPS : %d\n", *value);
  gps=*value;
}

void write_ins (int* value)
{
  int v ;
  v = rand()%100;
  *value = v;
  ins = v;
  printf ("Write INS : %d\n", *value);
}

void read_ins (int* value)
{
  printf ("Read INS : %d\n", *value);
  gps=*value;
}
