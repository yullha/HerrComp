set log xy
f(x) = A*x**B
A=1.0e-3; B=3;
fit f(x) 'datos.txt' via A, B
#g(x) = C*x**D
#C=1.0e-3; D=3;
#fit g(x) 'datosO3.txt' via C, D
set xlabel 'N'
set ylabel 'CPU time (s)'
set term pdf 
set out "fig.pdf"
plot 'datos.txt' w lp lw 4 t 'datos sin -O3', f(x) lw 5 t 'fit', 'datosO3.txt' w lp lw 4 t 'datos con -O3'#, g(x) lw 5 t 'fit'
