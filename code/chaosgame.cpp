// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>


// Make code easier to type with "using namespace"
using namespace sf;
using namespace std;

int main(){
    // Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Default);

    vector<Vector2f> vertices;
    vector<Vector2f> points;

    while (window.isOpen()){
        Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::MouseButtonPressed){
                if (event.mouseButton.button == sf::Mouse::Left)
            {
                std::cout << "the left button was pressed" << std::endl;
                std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    if (vertices.size() < 3){
                        vertices.push_back(Vector2f(event.mouseButton.x, event.mouseButton.y));
                    }
                    else if (points.size() == 0){
                        // fourth point
                        //generate

                    }
            }
        }

        }
        
        if (Keyboard::isKeyPressed(Keyboard::Escape)){
            window.close();
        }
        //Vector2f v(2,2);
        //RectangleShape rect(v);
        RectangleShape rect(Vector2f(2,2));
        rect.setPosition(Vector2f(1920/2, 1080/2));
        rect.setFillColor(Color::Blue);

        if (points.size() > 0){
            //generate more points
        }

        window.clear();
        for (int i = 0 ; i < vertices.size(); i++){
            RectangleShape rect(Vector2f(10,10));
            rect.setPosition(Vector2f(vertices[i].x,vertices[i].y));
            rect.setFillColor(Color::Blue);
            window.draw(rect);
        }
        
        window.display();
    }


}