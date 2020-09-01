demo : 
	c++ src/main.cpp -o demo `pkg-config gtkmm-3.0 --cflags --libs`

clean:
	rm demo