FILE = $(shell ls | grep java | cut -d'.' -f1)
all:
	@javac *.java
	@java ${FILE}

clean:
	@rm *.class
