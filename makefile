CC = g++
FLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

Lab1: Lab1.cpp
	$(CC) Lab1.cpp -o Lab1 $(FLAGS)
