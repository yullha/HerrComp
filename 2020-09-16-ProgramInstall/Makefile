# @: Nombre del target
# ^: todas las dependencias
# <: la primera dependencia

# all: show-eigen clean

eigen-example: eigen-example.cpp
	g++ -I $HOME/local/include eigen-example.cpp

show-eigen: eigen-example
	./a.out

clean:
	rm a.out

voro-example: voro-example.cpp
	g++ -I $HOME/local/include -L $HOME/local/lib voro-example.cpp -lvoro++
#this instructions works on Terminal, but does not work in Makefile

show-voro: voro-example
	./a.out

#GNU-plot: show-voro
#	gnuplot
#	splot 'random_points_p.gnu" u 2:3:4 ps 2 pt 5, 'random_points_v.gnu" w l lw 3
