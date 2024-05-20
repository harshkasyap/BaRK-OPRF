/* Generated by tuneup.c, 2014-03-24, gcc 4.7 */

#define MUL_KARATSUBA_THRESHOLD          22
#define MUL_TOOM3_THRESHOLD             135
#define MUL_TOOM4_THRESHOLD             212
#define MUL_TOOM8H_THRESHOLD            336

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          66
#define SQR_TOOM3_THRESHOLD             126
#define SQR_TOOM4_THRESHOLD             270
#define SQR_TOOM8_THRESHOLD             342

#define POWM_THRESHOLD                  984

#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1  /* native */
#define DIVREM_2_THRESHOLD            MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                35
#define MOD_1_2_THRESHOLD                75
#define MOD_1_3_THRESHOLD               103
#define DIVREM_HENSEL_QR_1_THRESHOLD      9
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      4
#define DIVREM_EUCLID_HENSEL_THRESHOLD     12

#define MUL_FFT_FULL_THRESHOLD         3616

#define SQR_FFT_FULL_THRESHOLD         3040

#define MULLOW_BASECASE_THRESHOLD         7
#define MULLOW_DC_THRESHOLD              39
#define MULLOW_MUL_THRESHOLD           2770

#define MULHIGH_BASECASE_THRESHOLD        9
#define MULHIGH_DC_THRESHOLD             42
#define MULHIGH_MUL_THRESHOLD          1720

#define MULMOD_2EXPM1_THRESHOLD          20

#define SB_DIVAPPR_Q_SMALL_THRESHOLD      0  /* always */
#define SB_DIV_QR_SMALL_THRESHOLD         0  /* always */
#define DC_DIV_QR_THRESHOLD              38
#define INV_DIV_QR_THRESHOLD            807
#define INV_DIVAPPR_Q_N_THRESHOLD        38
#define DC_DIV_Q_THRESHOLD               55
#define INV_DIV_Q_THRESHOLD             807
#define DC_DIVAPPR_Q_THRESHOLD           43
#define INV_DIVAPPR_Q_THRESHOLD        9782
#define DC_BDIV_QR_THRESHOLD             56
#define DC_BDIV_Q_THRESHOLD              53

#define ROOTREM_THRESHOLD                11

#define MATRIX22_STRASSEN_THRESHOLD      31
#define HGCD_THRESHOLD                  112
#define HGCD_APPR_THRESHOLD             170
#define HGCD_REDUCE_THRESHOLD          4633
#define GCD_DC_THRESHOLD                448
#define GCDEXT_DC_THRESHOLD             465
#define JACOBI_BASE_METHOD                2

#define GET_STR_DC_THRESHOLD             11
#define GET_STR_PRECOMPUTE_THRESHOLD     24
#define SET_STR_DC_THRESHOLD            345
#define SET_STR_PRECOMPUTE_THRESHOLD   1210

#define FAC_DSC_THRESHOLD               228
#define FAC_ODD_THRESHOLD                34

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 3 }, { 3, 2 }, { 2, 1 }, { 2, 1 }, { 1, 0 } }

#define MULMOD_TAB \
   { 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1 }

#define FFT_N_NUM 15

#define FFT_MULMOD_2EXPP1_CUTOFF 256


/* Tuneup completed successfully, took 914 seconds */

