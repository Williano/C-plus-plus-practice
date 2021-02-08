#pragma once

#include <iostream>
#include <string>


class TextBook
{
private:
	std::string m_title;
	std::string m_author;
	std::string m_publisher;

public:
	TextBook() : m_title(""), m_author(""), m_publisher("") {}

	TextBook(std::string textTitle, std::string auth, std::string pub) : m_title(textTitle), m_author(auth), m_publisher(pub) {}

	void print() const
	{
		std::cout << "Title: " << m_title << std::endl;
		std::cout << "Author: " << m_author << std::endl;
		std::cout << "Publisher: " << m_publisher << std::endl;
	}
};