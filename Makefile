APP = cp

SRCS = cp.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

CC = gcc

all: $(APP)

$(APP): $(OBJS)
	$(CC) $< -o $@

%.o: %.c
	$(CC) -c $< -o $@

clean: 
	rm *.o $(APP)
