#ifndef THREADS_FIXED_POINT_H_
#define THREADS_FIXED_POINT_H_
#include <stdint.h>

#define shift (1 << 14)
/*fixed_point{
	int real;
};*/
typedef int fixed_point;

fixed_point int_to_real (int n);

int real_to_int (fixed_point x);

int round_to_int (fixed_point x);

fixed_point add_real_int (fixed_point x, int n);

fixed_point add_real_real (fixed_point x, fixed_point y);

fixed_point sub_real_int (fixed_point x, int n);

fixed_point sub_real_real (fixed_point x, fixed_point y);

fixed_point mul_real_int (fixed_point x, int n);

fixed_point mul_real_real (fixed_point x, fixed_point y);

fixed_point div_real_real (fixed_point x, fixed_point y);

fixed_point div_real_int (fixed_point x, int n);

fixed_point div_int_int(int x, int n);

#endif
