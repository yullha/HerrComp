all: fig.pdf

fig.pdf: datos.txt datosO3.txt script.gp
	gnuplot script.gp

datos.txt: run.sh eigen-Axx.x
	bash run.sh

%.x: %.cpp
	g++ $< -I /home/live/local/include -o $@

datosO3.txt: runO3.sh eigen-AxxO3.x
	bash runO3.sh

eigen-AxxO3.x: eigen-Axx.cpp
	g++ -O3 eigen-Axx.cpp -I /home/live/local/include -o eigen-AxxO3.x
