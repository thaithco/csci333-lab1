CC = g++
FLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

Lab1: Lab1.cpp
	$(CC) Lab1.cpp -o Lab1 $(FLAGS)

Euler6: Euler6.cpp
	$(CC) Euler6.cpp -o Euler6 $(FLAGS)
