/* g++ ex12.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`*/ 

#include "Simple_window.h"
#include "Graph.h"

int main ()
{
    using namespace Graph_lib;

    int win_szelesseg=1280;
    int win_magassag=720;

    Point tl {100,100};
    Simple_window win {tl, win_szelesseg, win_magassag, "My Window"};
    
    
    //1.
    Rectangle kek {Point{200, 200}, 100, 50};
    kek.set_color(Color::blue);
    Polygon poly;
    poly.add(Point{100,50});
    poly.add(Point{200,50});
    poly.add(Point{200,100});
    poly.add(Point{100,100});
    
    Rectangle piros {Point{200, 300}, 100, 50};
    piros.set_color(Color::red);

    //2.
    Rectangle szovegkore {Point{230, 10}, 100, 30};
    Text t1 {Point{255,30}, "Howdy!"};
    
    //3.
    Text t2 {Point{340, 120}, "D"};
    t2.set_font_size(150);
    t2.set_font(Font::times_bold);
    t2.set_color(Color::green);
    Text t3 {Point{480, 120}, "D"};
    t3.set_font_size(150);
    t3.set_font(Font::times_bold);
    t3.set_color(Color::yellow);

    //4.
    Rectangle mezo1 {Point{600, 170}, 50, 50};
    mezo1.set_fill_color(Color::red);
    Rectangle mezo2 {Point{650, 170}, 50, 50};
    mezo2.set_fill_color(Color::white);
    Rectangle mezo3 {Point{700, 170}, 50, 50};
    mezo3.set_fill_color(Color::red);
    Rectangle mezo4 {Point{600, 220}, 50, 50};
    mezo4.set_fill_color(Color::white);
    Rectangle mezo5 {Point{650, 220}, 50, 50};
    mezo5.set_fill_color(Color::red);
    Rectangle mezo6 {Point{700, 220}, 50, 50};
    mezo6.set_fill_color(Color::white);
    Rectangle mezo7 {Point{600, 270}, 50, 50};
    mezo7.set_fill_color(Color::red);
    Rectangle mezo8 {Point{650, 270}, 50, 50};
    mezo8.set_fill_color(Color::white);
    Rectangle mezo9 {Point{700, 270}, 50, 50};
    mezo9.set_fill_color(Color::red);

    //5.
    int inch=96;
    Rectangle r1 {Point{190, 150}, win_szelesseg/3*2, win_magassag/4*3};
    Rectangle frame {Point {190-inch/8, 150-inch/8}, win_szelesseg/3*2+inch/4, win_magassag/4*3+inch/4};
    frame.set_color(Color::red);
    frame.set_style(Line_style(Line_style::solid, inch/4));
    
    //6. 
    Rectangle r4 {Point{1240, 30}, 100, 50};
    r4.set_fill_color(Color::black);
    Simple_window win2(Point{1400,8000}, win_magassag, win_szelesseg, "Does not fit");    

    //7.
    int a=500;
    int b=400;
    Polygon teto;
    teto.add(Point{a-60, b-60});
    teto.add(Point{a+60, b-60});
    teto.add(Point{a, b-100});
    teto.set_fill_color(Color::red);
    Rectangle kemeny {Point{a+20, b-100}, 20, 40};
    kemeny.set_fill_color(Color::red);
    Rectangle haz {Point{a-60, b-60}, 120, 120};
    haz.set_fill_color(Color::magenta);
    Rectangle ajto {Point{a-15, b+10},30, 50};
    ajto.set_fill_color(Color::red);
    Rectangle ablak1 {Point{a-50, b-30}, 30, 30};
    ablak1.set_fill_color(Color::red);
    Rectangle ablak2 {Point{a+20, b-30}, 30, 30};
    ablak2.set_fill_color(Color::red);

    //8.
    int x=700;
    int y=400;
    Circle kor1 {Point{x, y},50};
    kor1.set_color(Color::blue);
    kor1.set_style(Line_style(Line_style::solid, 2));
    Circle kor2 {Point{x+110, y},50};
    kor2.set_color(Color::black);
    kor2.set_style(Line_style(Line_style::solid, 2));
    Circle kor3 {Point{x+220, y},50};
    kor3.set_color(Color::red);
    kor3.set_style(Line_style(Line_style::solid, 2));
    Circle kor4 {Point{x+55, y+50},50};
    kor4.set_color(Color::yellow);
    kor4.set_style(Line_style(Line_style::solid, 2));
    Circle kor5 {Point{x+165, y+50},50};
    kor5.set_color(Color::dark_green);
    kor5.set_style(Line_style(Line_style::solid, 2));

    //9.
    Simple_window win3 (Point{100, 100}, 500, 500, "Badge");
    Image ii {Point{50, 50}, "badge.jpg"};
    Text t4 {Point{350, 400}, "Badge"};

    //kirajzolás
    win.attach(kek);
    win.attach(piros);
    win.attach(szovegkore);
    win.attach(t1);
    win.attach(t2);
    win.attach(t3);
    win.attach(mezo1);
    win.attach(mezo2);
    win.attach(mezo3);
    win.attach(mezo4);
    win.attach(mezo5);
    win.attach(mezo6);
    win.attach(mezo7);
    win.attach(mezo8);
    win.attach(mezo9);
    win.attach(r1);
    win.attach(frame);
    win.attach(r4);
    win.attach(kemeny);
    win.attach(teto);
    win.attach(haz);
    win.attach(ajto);
    win.attach(ablak1);
    win.attach(ablak2);
    win.attach(kor1);
    win.attach(kor2);
    win.attach(kor3);
    win.attach(kor4);
    win.attach(kor5);
    win3.attach(ii);
    win3.attach(t4);

    win.wait_for_button();
}
