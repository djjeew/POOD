#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "wing.h"





struct complex make_complex(double real, double imaginary)
{
  struct complex firstVariable;

  firstVariable.real = real;
  firstVariable.imaginary = imaginary;
  return firstVariable;
}



int  main()
{


struct complex c1;


c1 = make_complex(15 , 17);

printf("Real part = %f , imaginary part = %f ",c1.real , c1.imaginary);

  return 0;
}
