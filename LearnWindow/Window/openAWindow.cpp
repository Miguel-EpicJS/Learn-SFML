#include <SFML/Window.hpp>
#include <iostream>

int main()
{
	using namespace sf;
	int width = 800, height = 600;
	std::string name = "First Window"
	Window window(VideoMode(width, height), name);

	while(window.isOpen())
	{
		Event event;
		while(window.pollEvent(event))
		{
			if(event.type == Event::Closed)
			{
				window.close();
			}
		}
	}

	return 0;
}

