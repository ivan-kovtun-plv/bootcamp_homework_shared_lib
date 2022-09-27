OUT := libtf.so
ODIR := obj
SDIR := .
_OBJS := toUpperCase.o toLowerCase.o
OBJS := $(patsubst %,$(ODIR)/%,$(_OBJS))

$(OUT): $(OBJS)
	gcc -shared -o $(OUT) $(OBJS)

$(ODIR)/%.o: $(SDIR)/%.c $(ODIR)
	gcc -c $(INC) -o $@ $<

$(ODIR):
	mkdir -p obj

clean:
	rm -rf $(ODIR) $(OUT)

