# 
# Makefile for Concrete Program
# 
# Compiler: GCC 4.8.4
# Linker: ld - The GNU linker
# 

# for debugger: -O0 -g -Wall
# for development and internal release: -O2 -g -Wall
# for release outside the company: -O2 -Wall

#     It is very important to develop and test the code in "production mode".
#     You can find that in some cases code that works without optimization crashes
#     in optimized mode because of the bug in your code. (Believe me this happens a lot) -- So use -O2
#
#     In most of cases you still can debug quite well even with optimized code,
#     so add -g. However, if this is too hard to find the bug in such mode you can compile for debugger with -O0
#
#     Only if you have problems including debug information in code, you should remove -g.
#     It is good idea to have -g for the code in production environment,
#     because if something crashes you can get much more information.


CC = gcc
CFLAGS = 
CRELEASEFLAGS = -O2 -g -Wall
CDEBUGFLAGS = -Wall -DDEBUG -O0
LIBS = -lstdc++ -lm
INCLUDES = -I/sandbox/VisualStudio/C++ -I/home/darek/Downloads/cxxtest/cxxtest-4.4
LFLAGS =

SRCS = main.cpp \
	   logger.cpp \
	   myTime.cpp \
	   shape.cpp \
	   rectangle.cpp \
	   circle.cpp \
	   ring.cpp \
	   doubleT.cpp
	   
OBJS = $(SRCS:.cpp=.o)

MAIN = main

.PHONY: clean

# Release
build: 
	@echo [Release] Compiling $(MAIN)
build: CFLAGS += $(CRELEASEFLAGS)
build: $(MAIN)

# Debugging
debug:
	@echo [Debugging] Compiling $(MAIN)
debug: CFLAGS += $(CDEBUGFLAGS)
debug: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Other functionality
print-%: ; @echo $*=$($*)

clean:
	$(RM) *.o *~ $(MAIN)
