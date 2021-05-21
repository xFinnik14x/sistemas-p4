CC = gcc
CPPFLAGS = -fopenmp

p4: main.o matrix.o
	$(CC) $(CPPFLAGS) -o $@ $^

%o:%.c
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm *.o
	rm p4
