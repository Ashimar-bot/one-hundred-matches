rezo: src/m.c
	gcc -Wall -o rezo src/m.c src/p.c src/mi.c src/ci.c src/cm.c src/eg.c src/egpvp.c
run: ./rezo
	./rezo 
