
footballmaker: main.o backbone.o structure.o graph.o interactive.o
	g++ -o football_graph main.o backbone.o structure.o graph.o interactive.o
	g++ -o football_no_graph main4.cpp backbone.o structure.o graph.o interactive.o
	g++ -o football_man_pla_rel main2.cpp backbone.o structure.o graph.o interactive.o
	g++ -o interactive_graph main3.cpp backbone.o structure.o graph.o interactive.o
	g++ -o interactive_no_graph main5.cpp backbone.o structure.o graph.o interactive.o
	rm structure.o backbone.o main.o graph.o interactive.o
