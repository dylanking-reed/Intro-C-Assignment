
FLAGS=-Wall -Werror -Wextra -pedantic

tests: tests.c moving.o finding-divisors.o powers.o fibonacci.o
	cc $(FLAGS) -o tests  tests.c moving.o finding-divisors.o powers.o fibonacci.o

fib-cli: fib-cli.c fibonacci.o
	cc $(FLAGS) -o fib-cli fib-cli.c fibonacci.o

moving.o:
	cc $(FLAGS) -c moving.c

finding-divisors.o:
	cc $(FLAGS) -c finding-divisors.c

powers.o:
	cc $(FLAGS) -c powers.c


fibonacci.o:
	cc $(FLAGS) -c fibonacci.c
clean:
	rm tests moving.o finding-divisors.o powers.o fibonacci.o fib-cli
