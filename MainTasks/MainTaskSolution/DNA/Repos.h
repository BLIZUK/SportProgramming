



#ifndef REPOS_H
#define REPOS_H


#include <stdexcept>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>


class DNA_task
{

public:


	// Мое решение задачи
	class My_solution
	{



	private:


		struct _section
		{
			std::string section;
			struct _section* next;
			struct _section* prev;

			_section(const std::string value) : section(value), next(nullptr), prev(nullptr) {}
		};
		_section* head;
		_section* tail;
		size_t size;


	public:


		My_solution() : head(nullptr), tail(nullptr), size(0) {}


		~My_solution()
		{
			while (head)
			{
				_section* temp = head;
				head = head->next;
				delete temp;
			}
		}


		void push_back(const std::string value)
		{
			_section* newSection = new _section(value);
			if (!head)
			{
				head = tail = newSection;
			}
			else
			{
				newSection->next = head;
				head->prev = newSection;
				head = newSection;
			}
		}


		void filling(std::string sections)
		{
			std::istringstream iss(sections);
			std::string section;

			while (iss >> section)
			{
				push_back(section);
			}

		}


		void print()
		{
			_section* current = head;
			while (current)
			{
				std::cout << current->section;
				current = current->next;
			}
		}


		std::string& operator[](size_t index)
		{
			if (index < 0 || index >= size)
			{
				throw std::out_of_range("Индекс вышел за пределы.");
			}
			_section* temp = head;
			for (size_t i = 0; i < index; i++)
			{
				temp = temp->next;
			}
			return temp->section;
		}


		size_t getSize() const
		{
			return size;
		}


		bool empty() const
		{
			return size == 0;
		}


	}MS;


	// Верное решение, предложенное преподователем.
	class Right_solution
	{

	}RS;
};


#endif#pragma once
