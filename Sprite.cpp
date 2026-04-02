#include <iostream>
 
struct Sprite {
    int x;
    int y;
    //char symbol;
    bool visible;

    void hide() {
        visible = false;
    }
    void show() {
        visible = true;
    }
} ; // why the semicolon at the end of the struct definition?

int main() {
    Sprite s;
    s.x = 10.0;
    s.y = 20.0;
    s.visible = true;
    
    //std::cout << "Sprite " << "x: " << s.x << " y: " << s.y << " visible : " << s.visible << st d:
std::cout << s.visible<< std::endl; 
s.hide();
std::cout << s.visible << std::endl;

}
