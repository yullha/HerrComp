# @: Nombre del target
# ^: todas las dependencias
# <: la primera dependencia

all: fig.pdf clean

#sumas.x: sumas.cpp
#	g++ sumas.cpp -o sumas.x

%.x: %.cpp
	g++ $< -o $@

#datos.txt: sumas.x
#	./sumas.x > datos.txt

datos.txt: sumas.x
	./$< > $@

#fig.pdf: plot.py datos.txt
#	python3 plot.py

fig.pdf: plot.py datos.txt
	python3 $<

clean:
	rm *.x datos.txt