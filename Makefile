build: objects
	gcc -Wall source/main.c -o bin/main

build_display:
	gcc -Wall source/display.c -o bin/display

build_p1:
	gcc -Wall source/fibonacci.c -o bin/fibonacci
	gcc -Wall source/prime.c -o bin/prime

build_mission0: objects
	gcc -Wall source/mission0.c -o bin/mission0

build_p3:
	gcc -Wall source/practice3.c -o bin/practice3

objects:
	gcc -Wall includes/*.h -o objects/*.o

run:
	./bin/main

run_p1:
	./bin/fibonacci
	./bin/prime

run_mission0:
	./bin/mission0

run_p3:
	./bin/practice
