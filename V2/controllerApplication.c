#include <stdio.h>
#include <po_hi_time.h>

struct dataGPS {
	double latitude;
	double longitude
} dataGPS;

struct dataINS {
	double angularSpeed;
	double speed;
} dataINS;

int gps = 0;
int ins = 0;

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
  printf ("Write GPS : %d\n", *value);
}

void read_gps (int* value)
{
  printf ("Read GPS : %d\n", *value);
  gps=*value;
}

void write_ins (int* value)
{
  int v = *value;
  v++;
  *value = v;
  printf ("Write INS : %d\n", *value);
}

void read_ins (int* value)
{
  printf ("Read INS : %d\n", *value);
  gps=*value;
}