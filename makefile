inc := -I.
inc += -Ilib

build: main.o libtf.so
	sudo cp lib/libtf.so /usr/lib
	sudo chmod 0755 /usr/lib/libtf.so
	gcc main.o -l tf -o tf

main.o:
	gcc -c main.c $(inc)

libtf.so:
	cd lib && $(MAKE)

clean-here:
	rm -f *.o tf
	cd lib && $(MAKE) clean

clean-all:
	$(MAKE) clean-here
	sudo rm -f /usr/lib/libtf.so

clean:
	$(MAKE) clean-here
	@echo To delete /usr/lib/libtf.so use clean-all option

