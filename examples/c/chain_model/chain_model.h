#ifndef EXAMPLES_CASADI_CHAIN_CHAIN_MODEL_H_
#define EXAMPLES_CASADI_CHAIN_CHAIN_MODEL_H_

#include "acados/utils/types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define X0_NM2_FILE "examples/c/chain_model/x0_nm2.txt"
#define X0_NM3_FILE "examples/c/chain_model/x0_nm3.txt"
#define X0_NM4_FILE "examples/c/chain_model/x0_nm4.txt"
// #define X0_NM5_FILE "chain_model/x0_nm5.txt"
// #define X0_NM6_FILE "chain_model/x0_nm6.txt"
// #define X0_NM7_FILE "chain_model/x0_nm7.txt"
// #define X0_NM8_FILE "chain_model/x0_nm8.txt"
// #define X0_NM9_FILE "chain_model/x0_nm9.txt"

#define XN_NM2_FILE "examples/c/chain_model/xN_nm2.txt"
#define XN_NM3_FILE "examples/c/chain_model/xN_nm3.txt"
#define XN_NM4_FILE "examples/c/chain_model/xN_nm4.txt"
// #define XN_NM5_FILE "chain_model/xN_nm5.txt"
// #define XN_NM6_FILE "chain_model/xN_nm6.txt"
// #define XN_NM7_FILE "chain_model/xN_nm7.txt"
// #define XN_NM8_FILE "chain_model/xN_nm8.txt"
// #define XN_NM9_FILE "chain_model/xN_nm9.txt"

int vde_chain_nm2(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
int vde_chain_nm3(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
int vde_chain_nm4(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int vde_chain_nm5(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int vde_chain_nm6(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int vde_chain_nm7(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int vde_chain_nm8(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int vde_chain_nm9(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);

int jac_chain_nm2(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
int jac_chain_nm3(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
int jac_chain_nm4(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int jac_chain_nm5(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int jac_chain_nm6(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int jac_chain_nm7(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int jac_chain_nm8(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);
// int jac_chain_nm9(const real_t **arg, real_t **res, int *iw, real_t *w, int mem);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  // EXAMPLES_CASADI_CHAIN_CHAIN_MODEL_H_