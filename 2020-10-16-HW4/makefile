all: fig.pdf

fig.pdf: datos.txt script.gp
	gnuplot script.gp

datos.txt: run.sh eigen-Axx.x
	bash run.sh

%.x: %.cpp
	g++ $< -I /home/oquendo/local/include -o $@
