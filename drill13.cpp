/* g++ drill13.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`*/

#include "Simple_window.h"
#include "Graph.h"

int main(){

    using namespace Graph_lib;

    //1.
    Point tl {100, 100};
    Simple_window win {tl, 800, 1000, "Simple_window"};
    win.wait_for_button();

    //2.
    Lines grid;
	for (int x = 100; x <= 800; x += 100)
		grid.add(Point{x, 0}, Point{x, 800});
	for (int y = 100; y <= 800; y += 100)
		grid.add(Point{0, y}, Point{800, y});

    win.attach(grid);
    win.wait_for_button();

    //3.
    Rectangle piros1{Point{0,0},100,100};
    piros1.set_color(Color::red);
    Rectangle piros2{Point{100,100},100,100};
    piros2.set_color(Color::red);
    Rectangle piros3{Point{200,200},100,100};
    piros3.set_color(Color::red);
    Rectangle piros4{Point{300,300},100,100};
    piros4.set_color(Color::red);
    Rectangle piros5{Point{400,400},100,100};
    piros5.set_color(Color::red);
    Rectangle piros6{Point{500,500},100,100};
    piros6.set_color(Color::red);
    Rectangle piros7{Point{600,600},100,100};
    piros7.set_color(Color::red);
    Rectangle piros8{Point{700,700},100,100};
    piros8.set_color(Color::red);

    win.attach(piros1);
    win.attach(piros2);
    win.attach(piros3);
    win.attach(piros4);
    win.attach(piros5);
    win.attach(piros6);
    win.attach(piros7);
    win.attach(piros8);
    win.wait_for_button();

    //4.
    Image image1{Point{0, 300},"200x200.jpg"};
    Image image2{Point{300, 600},"200x200.jpg"};
    Image image3{Point{500, 100},"200x200.jpg"};

    win.attach(image1);
    win.attach(image2);
    win.attach(image3);
    win.wait_for_button();

    //5.
    for (int y2=0; y2<800; y2+=100){
        for (int x2=0; x2<800; x2+=100){
            Image image4{Point{x2,y2},"100x100.jpg"};
            win.attach(image4); 
            win.wait_for_button();
            }
        }
}