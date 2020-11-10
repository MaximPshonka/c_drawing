#include <SFML/Graphics.hpp>

sf::RenderWindow window;
sf::RectangleShape tr1(sf::Vector2f(100, 20));
sf::RectangleShape tr2(sf::Vector2f(40, 20));
sf::RectangleShape tr2_2(sf::Vector2f(40, 20));
sf::RectangleShape tr3(sf::Vector2f(20, 20));
sf::RectangleShape tr3_2(sf::Vector2f(20, 20));
sf::RectangleShape tr4(sf::Vector2f(20, 40));
sf::RectangleShape tr4_2(sf::Vector2f(20, 40));
sf::RectangleShape tr5(sf::Vector2f(300, 20));
sf::RectangleShape tr6(sf::Vector2f(20, 40));
sf::RectangleShape tr6_2(sf::Vector2f(20, 40));
sf::RectangleShape tr7(sf::Vector2f(20, 40));
sf::RectangleShape tr7_2(sf::Vector2f(20, 40));
sf::RectangleShape tr8(sf::Vector2f(60, 20));
sf::RectangleShape tr8_2(sf::Vector2f(60, 20));
sf::ConvexShape convex1;
sf::ConvexShape convex2;
sf::ConvexShape convex3;
sf::ConvexShape convex4;
sf::RectangleShape tr9(sf::Vector2f(20, 80));
sf::RectangleShape tr9_2(sf::Vector2f(20, 120));
sf::RectangleShape tr10(sf::Vector2f(20, 40));
sf::RectangleShape tr10_2(sf::Vector2f(20, 40));
sf::RectangleShape tr11(sf::Vector2f(20, 20));
sf::RectangleShape tr11_2(sf::Vector2f(20, 20));
sf::RectangleShape tr12(sf::Vector2f(40, 20));
sf::RectangleShape tr12_2(sf::Vector2f(40, 20));
sf::RectangleShape tr13(sf::Vector2f(100, 20));
sf::RectangleShape tr14(sf::Vector2f(80, 20));
sf::RectangleShape tr15(sf::Vector2f(20, 20));
sf::ConvexShape convex5;
sf::CircleShape c1(10);

void main()
{
	window.create(sf::VideoMode(500, 600), "Test");
	
	tr1.setFillColor(sf::Color::Black);
	tr1.setPosition(200, 100);

	tr2.setFillColor(sf::Color::Black);
	tr2.setPosition(160, 120);

	tr2_2.setFillColor(sf::Color::Black);
	tr2_2.setPosition(300, 120);

	tr3.setFillColor(sf::Color::Black);
	tr3.setPosition(140, 140);

	tr3_2.setFillColor(sf::Color::Black);
	tr3_2.setPosition(340, 140);

	tr4.setFillColor(sf::Color::Black);
	tr4.setPosition(120, 160);

	tr4_2.setFillColor(sf::Color::Black);
	tr4_2.setPosition(360, 160);

	tr5.setFillColor(sf::Color::Black);
	tr5.setPosition(100, 200);

	tr6.setFillColor(sf::Color::Black);
	tr6.setPosition(140, 220);

	tr6_2.setFillColor(sf::Color::Black);
	tr6_2.setPosition(220, 220);

	tr7.setFillColor(sf::Color::Black);
	tr7.setPosition(260, 220);

	tr7_2.setFillColor(sf::Color::Black);
	tr7_2.setPosition(340, 220);

	tr8.setFillColor(sf::Color::Black);
	tr8.setPosition(160, 260);

	tr8_2.setFillColor(sf::Color::Black);
	tr8_2.setPosition(280, 260);

	convex1.setPointCount(6);
	convex1.setPoint(0, sf::Vector2f(220, 220));
	convex1.setPoint(1, sf::Vector2f(220, 260));
	convex1.setPoint(2, sf::Vector2f(180, 260));
	convex1.setPoint(3, sf::Vector2f(180, 240));
	convex1.setPoint(4, sf::Vector2f(200, 240));
	convex1.setPoint(5, sf::Vector2f(200, 220));
	convex1.setFillColor(sf::Color::Black);

	convex2.setPointCount(6);
	convex2.setPoint(0, sf::Vector2f(340, 220));
	convex2.setPoint(1, sf::Vector2f(340, 260));
	convex2.setPoint(2, sf::Vector2f(300, 260));
	convex2.setPoint(3, sf::Vector2f(300, 240));
	convex2.setPoint(4, sf::Vector2f(320, 240));
	convex2.setPoint(5, sf::Vector2f(320, 220));
	convex2.setFillColor(sf::Color::Black);

	convex3.setPointCount(6);
	convex3.setPoint(0, sf::Vector2f(280, 220));
	convex3.setPoint(1, sf::Vector2f(320, 220));
	convex3.setPoint(2, sf::Vector2f(320, 240));
	convex3.setPoint(3, sf::Vector2f(300, 240));
	convex3.setPoint(4, sf::Vector2f(300, 260));
	convex3.setPoint(5, sf::Vector2f(280, 260));
	convex3.setFillColor(sf::Color::White);

	convex4.setPointCount(6);
	convex4.setPoint(0, sf::Vector2f(160, 220));
	convex4.setPoint(1, sf::Vector2f(200, 220));
	convex4.setPoint(2, sf::Vector2f(200, 240));
	convex4.setPoint(3, sf::Vector2f(180, 240));
	convex4.setPoint(4, sf::Vector2f(180, 260));
	convex4.setPoint(5, sf::Vector2f(160, 260));
	convex4.setFillColor(sf::Color::White);

	tr9.setFillColor(sf::Color::Black);
	tr9.setPosition(100, 220);

	tr9_2.setFillColor(sf::Color::Black);
	tr9_2.setPosition(380, 180);

	tr10.setFillColor(sf::Color::Black);
	tr10.setPosition(120, 300);

	tr10_2.setFillColor(sf::Color::Black);
	tr10_2.setPosition(360, 300);

	tr11.setFillColor(sf::Color::Black);
	tr11.setPosition(140, 340);

	tr11_2.setFillColor(sf::Color::Black);
	tr11_2.setPosition(340, 340);

	tr12.setFillColor(sf::Color::Black);
	tr12.setPosition(160, 360);

	tr12_2.setFillColor(sf::Color::Black);
	tr12_2.setPosition(300, 360);

	tr13.setFillColor(sf::Color::Black);
	tr13.setPosition(200, 380);

	tr14.setFillColor(sf::Color::Black);
	tr14.setPosition(220, 320);

	tr15.setFillColor(sf::Color::Black);
	tr15.setPosition(300, 300);

	convex5.setPointCount(6);
	convex5.setPoint(0, sf::Vector2f(200, 440));
	convex5.setPoint(1, sf::Vector2f(250, 460));
	convex5.setPoint(2, sf::Vector2f(300, 440));
	convex5.setPoint(3, sf::Vector2f(300, 480));
	convex5.setPoint(4, sf::Vector2f(250, 460));
	convex5.setPoint(5, sf::Vector2f(200, 480));
	convex5.setFillColor(sf::Color::Black);

	c1.setPosition(240, 450);
	c1.setFillColor(sf::Color::Black);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Yellow);

		window.draw(tr1);
		window.draw(tr2);
		window.draw(tr2_2);
		window.draw(tr3);
		window.draw(tr3_2);
		window.draw(tr4);
		window.draw(tr4_2);
		window.draw(tr5);
		window.draw(tr6);
		window.draw(tr6_2);
		window.draw(tr7);
		window.draw(tr7_2);
		window.draw(tr8);
		window.draw(tr8_2);
		window.draw(convex1);
		window.draw(convex2);
		window.draw(convex3);
		window.draw(convex4);
		window.draw(tr9);
		window.draw(tr9_2);
		window.draw(tr10);
		window.draw(tr10_2);
		window.draw(tr11);
		window.draw(tr11_2);
		window.draw(tr12);
		window.draw(tr12_2);
		window.draw(tr13);
		window.draw(tr14);
		window.draw(tr15);
		window.draw(c1);
		window.draw(convex5);
		window.display();
	}
	
}