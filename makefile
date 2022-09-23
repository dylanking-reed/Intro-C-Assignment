
FLAGS=-Wall -Werror -Wextra -pedantic

tests: tests.c moving.o finding-divisors.o powers.o
	cc $(FLAGS) -o tests  tests.c moving.o finding-divisors.o powers.o

moving.o:
	cc $(FLAGS) -c moving.c

finding-divisors.o:
	cc $(FLAGS) -c finding-divisors.c

powers.o:
	cc $(FLAGS) -lm -c powers.c

clean:
	rm tests moving.o finding-divisors.o powers.o
