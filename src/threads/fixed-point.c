#include "threads/fixed-point.h"

int real_to_int(fixed_point x) {
	return x / shift;

}

int round_to_int(fixed_point x) {

	   return x >= 0 ? (x + shift / 2) / shift : (x - shift / 2) / shift;
	//return real_to_int(result);
	//return x / shift;


}

fixed_point add_real_real(fixed_point x, fixed_point y) {

	return x + y;
}

fixed_point add_real_int(fixed_point x, int n) {

	return x + (n * shift);
}

fixed_point sub_real_real(fixed_point x, fixed_point y) {

	return x - y;
}

fixed_point sub_real_int(fixed_point x, int n) {

	return x - (n * shift);
}

fixed_point mul_real_real(fixed_point x, fixed_point y) {

	return ((int64_t) x) * y / shift;
}

fixed_point mul_real_int(fixed_point x, int n) {
	return x * n;
}

fixed_point div_real_real(fixed_point x, fixed_point y) {

	return ((int64_t) x) * shift / y;
}

fixed_point div_real_int(fixed_point x, int n) {
	return x / n;

}

fixed_point div_int_int(int x, int n) {
return x * shift / n;
}

fixed_point int_to_real(int n) {
return shift * n;
}
