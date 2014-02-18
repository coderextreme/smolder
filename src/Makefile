LIBS=-L/opt/local/lib -L/Developer/SDKs/MacOSX10.6.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/
smolder:main.o test.o
	clang $(LIBS) -lglfw -lGL main.o -o smolder

main.o:main.c
test.o:test.cpp

clean:
	rm main.o test.o smolder
