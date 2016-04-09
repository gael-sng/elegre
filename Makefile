all:
	gcc -o teste teste.c
run:
	./teste -o decoded.bin -i undecoded.txt
