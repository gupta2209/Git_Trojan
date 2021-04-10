
#ifndef FIR_H_
#define FIR_H_
#define N	11

typedef int	coef_t;
typedef int	data_t;
typedef int	acc_t;

int fir (
  coef_t c[N+1],
  data_t x
  );

#endif
