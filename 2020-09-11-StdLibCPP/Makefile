# @: Nombre del target
# ^: todas las dependencias
# <: la primera dependencia

all: fig.pdf clean

legendre.x: example1.cpp
	g++ -std=c++17 example1.cpp -o legendre.x

data.txt: legendre.x
	./legendre.x > data.txt

fig.pdf: plot.py data.txt
	python3 plot.py

clean:
	rm *.x data.txt


