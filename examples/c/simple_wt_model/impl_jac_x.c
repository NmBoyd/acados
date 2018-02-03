/* This function was automatically generated by CasADi */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) impl_jac_x_ ## ID
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
static const int CASADI_PREFIX(s2)[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};
#define s2 CASADI_PREFIX(s2)
/* impl_jacFun_x */
int impl_jacFun_x(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  real_t a0=10.;
  real_t a1=arg[0] ? arg[0][5] : 0;
  a0=(a0-a1);
  a1=sq(a0);
  real_t a2=(a0*a1);
  real_t a3=63.;
  real_t a4=(a3/a0);
  real_t a5=5.1381069669726320e-01;
  real_t a6=(a5*a4);
  real_t a7=arg[0] ? arg[0][0] : 0;
  a3=(a3*a7);
  a3=(a3/a0);
  real_t a8=(a3+a3);
  real_t a9=(a8*a4);
  real_t a10=5.3643298207327321e-02;
  real_t a11=(a10*a9);
  a6=(a6-a11);
  a11=sq(a3);
  real_t a12=(a11*a4);
  real_t a13=(a3*a9);
  a12=(a12+a13);
  a13=1.7681702976113051e-03;
  a12=(a13*a12);
  a6=(a6+a12);
  a12=arg[0] ? arg[0][1] : 0;
  real_t a14=sq(a12);
  real_t a15=(a14*a4);
  real_t a16=1.1202557508418361e-03;
  a15=(a16*a15);
  a6=(a6-a15);
  a15=(a12*a4);
  real_t a17=1.6516465213717951e-02;
  a15=(a17*a15);
  a6=(a6-a15);
  a15=(a12*a9);
  real_t a18=1.2020009958957070e-03;
  a15=(a18*a15);
  a6=(a6+a15);
  a15=1.8816061028320376e-04;
  a6=(a15*a6);
  a6=(a2*a6);
  a6=(a6/a7);
  real_t a19=(a5*a3);
  real_t a20=(a10*a11);
  a19=(a19-a20);
  a20=3.4512339473213010e-03;
  real_t a21=(a20*a14);
  a19=(a19+a21);
  a21=5.6389644359000818e-02;
  real_t a22=(a21*a12);
  a19=(a19+a22);
  a22=(a3*a11);
  a22=(a13*a22);
  a19=(a19+a22);
  a22=(a3*a14);
  a22=(a16*a22);
  a19=(a19-a22);
  a22=(a3*a12);
  a22=(a17*a22);
  a19=(a19-a22);
  a22=(a11*a12);
  a22=(a18*a22);
  a19=(a19+a22);
  a22=(a14*a12);
  real_t a23=6.3001425151030729e-05;
  a22=(a23*a22);
  a19=(a19+a22);
  a22=1.0878686532028441e+00;
  a19=(a19-a22);
  a19=(a15*a19);
  a22=(a19*a2);
  a22=(a22/a7);
  a22=(a22/a7);
  a6=(a6-a22);
  a6=(-a6);
  if (res[0]!=0) res[0][0]=a6;
  a6=0.;
  if (res[0]!=0) res[0][1]=a6;
  if (res[0]!=0) res[0][2]=a6;
  if (res[0]!=0) res[0][3]=a6;
  if (res[0]!=0) res[0][4]=a6;
  a22=4.7304139343994273e-01;
  real_t a24=(a22*a4);
  real_t a25=4.3336234151579167e-02;
  real_t a26=(a25*a9);
  a24=(a24-a26);
  a26=(a11*a4);
  real_t a27=(a3*a9);
  a26=(a26+a27);
  a27=1.4591948007449519e-03;
  a26=(a27*a26);
  a24=(a24+a26);
  a26=(a14*a4);
  real_t a28=2.5594151773779939e-04;
  a26=(a28*a26);
  a24=(a24-a26);
  a4=(a12*a4);
  a26=2.1326240297676439e-02;
  a4=(a26*a4);
  a24=(a24-a4);
  a9=(a12*a9);
  a4=5.6669618242007665e-04;
  a9=(a4*a9);
  a24=(a24+a9);
  a9=1.6174448326453802e-02;
  a24=(a9*a24);
  real_t a29=sq(a0);
  a24=(a29*a24);
  a24=(-a24);
  if (res[0]!=0) res[0][5]=a24;
  a24=(a12+a12);
  a20=(a20*a24);
  a20=(a20+a21);
  a21=(a3*a24);
  a21=(a16*a21);
  a20=(a20-a21);
  a21=(a17*a3);
  a20=(a20-a21);
  a21=(a18*a11);
  a20=(a20+a21);
  a21=(a12*a24);
  a21=(a21+a14);
  a23=(a23*a21);
  a20=(a20+a23);
  a20=(a15*a20);
  a20=(a2*a20);
  a20=(a20/a7);
  a20=(-a20);
  if (res[0]!=0) res[0][6]=a20;
  if (res[0]!=0) res[0][7]=a6;
  if (res[0]!=0) res[0][8]=a6;
  if (res[0]!=0) res[0][9]=a6;
  if (res[0]!=0) res[0][10]=a6;
  a20=2.2405056707185689e-04;
  a23=(a20*a24);
  a21=7.8201554349094676e-02;
  a23=(a21-a23);
  real_t a30=(a3*a24);
  a30=(a28*a30);
  a23=(a23-a30);
  a30=(a26*a3);
  a23=(a23-a30);
  a30=(a4*a11);
  a23=(a23+a30);
  a24=(a12*a24);
  a24=(a24+a14);
  a30=4.6705649406027157e-05;
  a24=(a30*a24);
  a23=(a23+a24);
  a23=(a9*a23);
  a23=(a29*a23);
  a23=(-a23);
  if (res[0]!=0) res[0][11]=a23;
  if (res[0]!=0) res[0][12]=a6;
  a23=-1.;
  if (res[0]!=0) res[0][13]=a23;
  if (res[0]!=0) res[0][14]=a6;
  if (res[0]!=0) res[0][15]=a6;
  if (res[0]!=0) res[0][16]=a6;
  if (res[0]!=0) res[0][17]=a6;
  a24=2.3898100470570842e-06;
  if (res[0]!=0) res[0][18]=a24;
  if (res[0]!=0) res[0][19]=a6;
  if (res[0]!=0) res[0][20]=a6;
  if (res[0]!=0) res[0][21]=a6;
  if (res[0]!=0) res[0][22]=a6;
  if (res[0]!=0) res[0][23]=a6;
  if (res[0]!=0) res[0][24]=a6;
  if (res[0]!=0) res[0][25]=a6;
  if (res[0]!=0) res[0][26]=a6;
  if (res[0]!=0) res[0][27]=a6;
  if (res[0]!=0) res[0][28]=a6;
  a24=4.0598924139099495e+00;
  if (res[0]!=0) res[0][29]=a24;
  a24=(a3/a0);
  a5=(a5*a24);
  a8=(a8*a24);
  a10=(a10*a8);
  a5=(a5-a10);
  a10=(a11*a24);
  real_t a31=(a3*a8);
  a10=(a10+a31);
  a13=(a13*a10);
  a5=(a5+a13);
  a13=(a14*a24);
  a16=(a16*a13);
  a5=(a5-a16);
  a16=(a12*a24);
  a17=(a17*a16);
  a5=(a5-a17);
  a17=(a12*a8);
  a18=(a18*a17);
  a5=(a5+a18);
  a15=(a15*a5);
  a2=(a2*a15);
  a15=(a0+a0);
  a15=(a0*a15);
  a1=(a1+a15);
  a19=(a19*a1);
  a2=(a2-a19);
  a2=(a2/a7);
  a2=(-a2);
  if (res[0]!=0) res[0][30]=a2;
  if (res[0]!=0) res[0][31]=a6;
  if (res[0]!=0) res[0][32]=a6;
  if (res[0]!=0) res[0][33]=a6;
  if (res[0]!=0) res[0][34]=a23;
  a23=(a22*a24);
  a6=(a25*a8);
  a23=(a23-a6);
  a6=(a11*a24);
  a2=(a3*a8);
  a6=(a6+a2);
  a6=(a27*a6);
  a23=(a23+a6);
  a6=(a14*a24);
  a6=(a28*a6);
  a23=(a23-a6);
  a24=(a12*a24);
  a24=(a26*a24);
  a23=(a23-a24);
  a8=(a12*a8);
  a8=(a4*a8);
  a23=(a23+a8);
  a23=(a9*a23);
  a29=(a29*a23);
  a22=(a22*a3);
  a25=(a25*a11);
  a22=(a22-a25);
  a20=(a20*a14);
  a22=(a22-a20);
  a21=(a21*a12);
  a22=(a22+a21);
  a21=(a3*a11);
  a27=(a27*a21);
  a22=(a22+a27);
  a27=(a3*a14);
  a28=(a28*a27);
  a22=(a22-a28);
  a3=(a3*a12);
  a26=(a26*a3);
  a22=(a22-a26);
  a11=(a11*a12);
  a4=(a4*a11);
  a22=(a22+a4);
  a14=(a14*a12);
  a30=(a30*a14);
  a22=(a22+a30);
  a30=9.3439550267554516e-01;
  a22=(a22-a30);
  a9=(a9*a22);
  a0=(a0+a0);
  a9=(a9*a0);
  a29=(a29-a9);
  a9=-3.9887331102545637e-02;
  a9=(a9+a29);
  a9=(-a9);
  if (res[0]!=0) res[0][35]=a9;
  return 0;
}

void impl_jacFun_x_incref(void) {
}

void impl_jacFun_x_decref(void) {
}

int impl_jacFun_x_n_in(void) { return 3;}

int impl_jacFun_x_n_out(void) { return 1;}

const char* impl_jacFun_x_name_in(int i){
  switch (i) {
  case 0: return "i0";
  case 1: return "i1";
  case 2: return "i2";
  default: return 0;
  }
}

const char* impl_jacFun_x_name_out(int i){
  switch (i) {
  case 0: return "o0";
  default: return 0;
  }
}

const int* impl_jacFun_x_sparsity_in(int i) {
  switch (i) {
  case 0: return s0;
  case 1: return s0;
  case 2: return s1;
  default: return 0;
  }
}

const int* impl_jacFun_x_sparsity_out(int i) {
  switch (i) {
  case 0: return s2;
  default: return 0;
  }
}

int impl_jacFun_x_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 32;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
