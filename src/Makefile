LIBS=-L/opt/local/lib -L/Developer/SDKs/MacOSX10.6.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/
CXX=g++
smolder:main.o test.o
	$(CXX) $(LIBS) -lglfw -lGL main.o -o smolder

main.o:main.cpp Window.hpp

testincludes.hpp: ActionEvent.hpp ActionListener.hpp Button.hpp Component.hpp Container.hpp Font.hpp Label.hpp ShaderProgram.hpp TextField.hpp Window.hpp

test.o:test.cpp testincludes.hpp

clean:
	rm main.o test.o smolder
# DO NOT DELETE
