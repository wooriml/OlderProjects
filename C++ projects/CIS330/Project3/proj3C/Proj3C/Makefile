SRC=main3C.C image.C sink.C source.C PNMreader.C PNMwriter.C filters.C
OBJ=$(SRC:.C=.o)

prog: $(OBJ)
	g++ $(OBJ) -g -o proj3C

.C.o: $<
	g++ -I. -g -c $<

clean:
	rm *.o proj3C
