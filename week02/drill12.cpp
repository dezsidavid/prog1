/* g++ laborweek02.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`*/ 

#include "Simple_window.h"
#include "Graph.h"


int main ()
{
    using namespace Graph_lib;
    
    //window
    Point tl {100,100};
    Simple_window win {tl,600,400,"My Window"};
    
    //axis
    Axis xa {Axis::x, Point{20,300}, 280, 10, "x axis"};
    Axis ya {Axis::y, Point{20,300}, 280, 10, "y axis"};
    
    //function
    Function sinus{sin, 0, 100, Point{20,150}, 1000, 50, 50};
    
    //polygon
    Polygon poly;
    poly.add(Point{300,200});
    poly.add(Point{350,100});
    poly.add(Point{400,200});

    //rechtangle
    Rectangle r {Point{200,200}, 100, 50};
    
    //text
    Text t {Point{150,150}, "Hello, graphical world!"};

    
    //image
    Image ii {Point{10,10},"badge.jpg"};
    
    //circle
    Circle c {Point{100,200},50};
    
    //ellipse
    Ellipse ellipse{Point{32, 32}, 13, 43};

    //mark
    Mark mark{Point{100, 100}, 'x'};

    //egyéb
    t.set_font_size(25);
    t.set_font_size(Font::times_bold);
    poly.set_color(Color::blue);
    poly.set_style(Line_style::solid);


    //kirajzolás
    win.attach(xa);
    win.attach(ya);
    win.attach(sinus);
    win.attach(poly);
    win.attach(r);
    win.attach(t);
    win.attach(c);
    win.attach(ellipse);
    win.attach(mark);
    //win.attach(ii); //(csak, hogy látszódjanak a dolgok)
    
    win.wait_for_button();
}
