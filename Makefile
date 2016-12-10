CC = g++
CCSW = -O3 -Wno-deprecated-declarations
PLATFORM = `uname`

planet: planet.o
	@if [ ${PLATFORM} = "Linux" ]; \
	then $(CC) -o planet planet.cc ${CCSW} -lGL -lGLU -lglut; \
	echo Linking for Linux; \
	elif [ ${PLATFORM} = "Darwin" ]; \
	then $(CC) -o planet planet.cc ${CCSW} -framework GLUT -framework OpenGL; \
	echo Linking for Mac OS X; \
	fi

.cpp.o:
	$(CC) ${CCSW} -c $<

clean:
	echo cleaning up; /bin/rm -f core *.o planet

all:	planet

