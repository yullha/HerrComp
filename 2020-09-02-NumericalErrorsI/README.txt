** under_over.cpp
   Determines the underflow and overflow for double variables, i.e,
      underflow = 1/(2^N),
      overflow = 1*(2^N),
   where N is an input parameter. So, you must debugger as
      ./a.out N.
   
   The results are
       N_under= 1074, i.e., x_min = 1/(2^1074) = 4.940656458412465e-324,
       N_over = 1023, i.e., x_max = 2^1023 = 8.988465674311580e+307.

   Scholium: Note that if you compute 2^1024 = inf directly, then 1/2^1074 =
   1/inf = 0. This wrong result in underflow is consequence of the overflow.

** eps.cpp
   Determines the Machine Precision EPS for float variables, i.e, determines a N
   such that
        1 + eps = 1,
   where
        eps = 1/(2^N),
   being N an input parameter. So, you must debug as
        ./a.out N.

   The results are
       N = 23, i.e., epsilon = 1/23 = 1.1920929e-07.

** exp.cpp
   Determines the exp(-x) Taylor series.

   You must debug as
       ./a.out x N
   where x is the point where you evaluate the series and N is the nth term of the sum.

   For x=0.5, the result is N = 14, i.e., the 14th term is the eps term (see eps.cpp)
       
