INCLUDES=-I/opt/local/include 
LIBS=-L/opt/local/lib -L/Developer/SDKs/MacOSX10.6.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/
smolder:main.o
	clang -v $(LIBS) -lglfw -lGL main.o -o smolder

main.o:main.c
