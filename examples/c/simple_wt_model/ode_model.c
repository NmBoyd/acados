/* This function was automatically generated by CasADi */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) ode_model_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#ifndef real_t
#define real_t double
#endif /* real_t */

#define to_double(x) (double) x
#define to_int(x) (int) x
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
real_t CASADI_PREFIX(fmin)(real_t x, real_t y) { return x<y ? x : y;}
#define fmin(x,y) CASADI_PREFIX(fmin)(x,y)
real_t CASADI_PREFIX(fmax)(real_t x, real_t y) { return x>y ? x : y;}
#define fmax(x,y) CASADI_PREFIX(fmax)(x,y)
#endif

#define PRINTF printf
real_t CASADI_PREFIX(sq)(real_t x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

real_t CASADI_PREFIX(sign)(real_t x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[6] = {2, 1, 0, 2, 0, 1};
#define s1 CASADI_PREFIX(s1)
/* odeFun */
int odeFun(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  real_t a0=63.;
  real_t a1=arg[0] ? arg[0][0] : 0;
  a0=(a0*a1);
  real_t a2=10.;
  real_t a3=arg[0] ? arg[0][5] : 0;
  a2=(a2-a3);
  a0=(a0/a2);
  real_t a4=5.1381069669726320e-01;
  a4=(a4*a0);
  real_t a5=sq(a0);
  real_t a6=5.3643298207327321e-02;
  a6=(a6*a5);
  a4=(a4-a6);
  a6=arg[0] ? arg[0][1] : 0;
  real_t a7=sq(a6);
  real_t a8=3.4512339473213010e-03;
  a8=(a8*a7);
  a4=(a4+a8);
  a8=5.6389644359000818e-02;
  a8=(a8*a6);
  a4=(a4+a8);
  a8=(a0*a5);
  real_t a9=1.7681702976113051e-03;
  a9=(a9*a8);
  a4=(a4+a9);
  a9=(a0*a7);
  a8=1.1202557508418361e-03;
  a8=(a8*a9);
  a4=(a4-a8);
  a8=(a0*a6);
  a9=1.6516465213717951e-02;
  a9=(a9*a8);
  a4=(a4-a9);
  a9=(a5*a6);
  a8=1.2020009958957070e-03;
  a8=(a8*a9);
  a4=(a4+a8);
  a8=(a7*a6);
  a9=6.3001425151030729e-05;
  a9=(a9*a8);
  a4=(a4+a9);
  a9=1.0878686532028441e+00;
  a4=(a4-a9);
  a9=1.8816061028320376e-04;
  a9=(a9*a4);
  a4=sq(a2);
  a4=(a2*a4);
  a9=(a9*a4);
  a9=(a9/a1);
  a1=arg[0] ? arg[0][3] : 0;
  a4=4.1844329896907217e+05;
  a1=(a1/a4);
  a9=(a9-a1);
  if (res[0]!=0) res[0][0]=a9;
  a9=arg[0] ? arg[0][2] : 0;
  if (res[0]!=0) res[0][1]=a9;
  a9=arg[1] ? arg[1][1] : 0;
  if (res[0]!=0) res[0][2]=a9;
  a9=arg[1] ? arg[1][0] : 0;
  if (res[0]!=0) res[0][3]=a9;
  if (res[0]!=0) res[0][4]=a3;
  a9=-1917000.;
  a1=arg[0] ? arg[0][4] : 0;
  a9=(a9*a1);
  a1=18834.;
  a1=(a1*a3);
  a9=(a9-a1);
  a1=2.1178364183150493e-06;
  a1=(a1*a9);
  a9=4.7304139343994273e-01;
  a9=(a9*a0);
  a3=4.3336234151579167e-02;
  a3=(a3*a5);
  a9=(a9-a3);
  a3=2.2405056707185689e-04;
  a3=(a3*a7);
  a9=(a9-a3);
  a3=7.8201554349094676e-02;
  a3=(a3*a6);
  a9=(a9+a3);
  a3=(a0*a5);
  a4=1.4591948007449519e-03;
  a4=(a4*a3);
  a9=(a9+a4);
  a4=(a0*a7);
  a3=2.5594151773779939e-04;
  a3=(a3*a4);
  a9=(a9-a3);
  a0=(a0*a6);
  a3=2.1326240297676439e-02;
  a3=(a3*a0);
  a9=(a9-a3);
  a5=(a5*a6);
  a3=5.6669618242007665e-04;
  a3=(a3*a5);
  a9=(a9+a3);
  a7=(a7*a6);
  a6=4.6705649406027157e-05;
  a6=(a6*a7);
  a9=(a9+a6);
  a6=9.3439550267554516e-01;
  a9=(a9-a6);
  a6=1.6174448326453802e-02;
  a6=(a6*a9);
  a2=sq(a2);
  a6=(a6*a2);
  a1=(a1+a6);
  if (res[0]!=0) res[0][5]=a1;
  return 0;
}

void odeFun_incref(void) {
}

void odeFun_decref(void) {
}

int odeFun_n_in(void) { return 2;}

int odeFun_n_out(void) { return 1;}

const char* odeFun_name_in(int i){
  switch (i) {
  case 0: return "i0";
  case 1: return "i1";
  default: return 0;
  }
}

const char* odeFun_name_out(int i){
  switch (i) {
  case 0: return "o0";
  default: return 0;
  }
}

const int* odeFun_sparsity_in(int i) {
  switch (i) {
  case 0: return s0;
  case 1: return s1;
  default: return 0;
  }
}

const int* odeFun_sparsity_out(int i) {
  switch (i) {
  case 0: return s0;
  default: return 0;
  }
}

int odeFun_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 10;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
