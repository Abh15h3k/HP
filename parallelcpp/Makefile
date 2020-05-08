CC = g++
CCFLAGS = -lpthread

all: bounded_buffer dining_philosophers reader_writers sleeping_barber

bounded_buffer: bounded_buffer.cpp
	${CC} ${CCFLAGS} -o bounded_buffer bounded_buffer.cpp

dining_philosophers: dining_philosophers.cpp
	${CC} ${CCFLAGS} -o dining_philosophers dining_philosophers.cpp

reader_writers: reader_writers.cpp
	${CC} ${CCFLAGS} -o reader_writers reader_writers.cpp

sleeping_barber: sleeping_barber.cpp
	${CC} ${CCFLAGS} -o sleeping_barber sleeping_barber.cpp

clean:
	@rm bounded_buffer dining_philosophers reader_writers sleeping_barber
