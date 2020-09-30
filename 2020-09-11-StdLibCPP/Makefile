# @: Nombre del target
# ^: todas las dependencias
# <: la primera dependencia

all: fig.pdf clean

legendre.x: legendre.cpp
	g++ -std=c++17 legendre.cpp -o legendre.x

data.txt: legendre.x
	./legendre.x > data.txt

fig.pdf: plot.py data.txt
	python3 plot.py

clean:
	rm *.x data.txt
