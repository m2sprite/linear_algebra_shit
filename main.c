#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include "vecs.h"
#include "vecs.c"
#include "mats.h"
#include "mats.c"
#include "helpers.c"
//NOTE: functions that don't modify the matrix don't take it in by pointer


/*
void gaussj(f64_mat *A, f64_mat *B)
{
  size_t i, col_i, row_i, j, k, l, ll;
  size_t n = A->rows;
  size_t m = B->columns;
  f64 big, dum, pivin;
  i32_vec indxc = i32_vec_alloc(n);
  i32_vec indxr = i32_vec_alloc(n);
  i32_vec ipiv = i32_vec_alloc(n);
  i32_vec_fill_zero(&ipiv);

  //This is the main loop over the columns to be
  for (i=0;i<n;i++)
  {
    big=0.0; //This is the outer loop of the search for a pivot
    for (j=0; j < n;j++)
    {
      if(ipiv.elements[j] != 1)
      {
        for (k = 0; k < n; k++)
        {
          if(ipiv.elements[k] == 0)
          {
            if( fabs(A->elements[(j*m)+k]) >= big)
            {
              big = fabs(A->elements[(j*m)+k]);
              row_i = j;
              col_i = k;
            }
          }
        }
        ++(ipiv.elements[col_i]);
        if (row_i != col_i) {

          for (l=0;l<n;l++)
          {
            SWAP(a[irow][l],a[icol][l]);
          }

          for (l=0;l<m;l++)
          {
            SWAP(b[irow][l],b[icol][l]);
          }

        }
      }
    }
  }
 #if 0
      for (i=0;i<n;i++) { This is the main loop over the columns to be
        big=0.0; reduced.
          for (j=0;j<n;j++) This is the outer loop of the search for a pivot
            if (ipiv[j] != 1) element.
              for (k=0;k<n;k++) {
                if (ipiv[k] == 0) {
                  if (abs(a[j][k]) >= big) {
                    big=abs(a[j][k]);
                    irow=j;
                    icol=k;
                  }
                }
              }
        ++(ipiv[icol]);
        if (irow != icol) {
          for (l=0;l<n;l++) SWAP(a[irow][l],a[icol][l]);
          for (l=0;l<m;l++) SWAP(b[irow][l],b[icol][l]);
        }
        indxr[i]=irow;
        indxc[i]=icol;
        if (a[icol][icol] == 0.0) throw("gaussj: Singular Matrix");
        pivinv=1.0/a[icol][icol];
        a[icol][icol]=1.0;
        for (l=0;l<n;l++) a[icol][l] *= pivinv;
        for (l=0;l<m;l++) b[icol][l] *= pivinv;
        for (ll=0;ll<n;ll++)
          if (ll != icol) {
            dum=a[ll][icol];
            a[ll][icol]=0.0;
            for (l=0;l<n;l++) a[ll][l] -= a[icol][l]*dum;
            for (l=0;l<m;l++) b[ll][l] -= b[icol][l]*dum;
          }
      }
  for (l=n-1;l>=0;l--) {
    if (indxr[l] != indxc[l])
      for (k=0;k<n;k++)
        SWAP(a[k][indxr[l]],a[k][indxc[l]]);
  } And we are done.
#endif
}
*/

int main(void) {

  f64_mat A = mat_f64_alloc(3,3);
  f64_mat_fill_rand( &A , 100.0f);
  f64_mat_print( A );
  f64_swap_rows(&A, 1, 2);
  f64_mat_print( A );

  /*
  f64_mat B = mat_f64_alloc(3,3);
  f64_mat_fill_rand( &B , 100.0f);
  f64_mat_print( B );

  gaussj(&A,&B);
  */

  return(0);
}
